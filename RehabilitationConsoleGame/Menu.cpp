#include "Menu.hpp"



/// ----------------------------------------------------------------------------------------------
int Menu::Update()
{
	// �Q�[���̊J�n�m�F
	SleepBar();
	SleepCout("�Q�[���� �n�߂܂����H");
	SleepNull();
	SleepCout("�n�߂�Ȃ� 1��");
	SleepCout("�n�߂Ȃ��Ȃ� 0��");
	while (true)
	{
		InputFail(m_entirety);
		
		if (m_entirety != 0 && m_entirety != 1)
		{
			SleepCout("0 �� 1����͂��Ă��������B");
		}
		else break;
	}


	// �Q�[�����I��
	if (!m_entirety) return 0;


	// ��
	for (int i = 0; i != 4; ++i)
	{
		SleepNull();
	}


	// �O��f�[�^���������ꍇ�A�������g�����ǂ���
	if (m_isSaveFileHave)
	{
		m_entirety = -1;

		SleepBar();
		SleepCout("�O��f�[�^�� ����܂��B");
		SleepCout("�^�X�N�� �������܂������H");
		SleepCout("������ �ŏ����� ���܂����H");
		SleepCout("����Ƃ� �^�X�N�� �ǉ����܂����H");
		SleepNull();
		SleepCout("�^�X�N�� �ǉ�����Ȃ� 1��");
		SleepCout("�S�� �����Ȃ� 0��");
		while (true)
		{
			InputFail(m_entirety);

			if (m_entirety != 0 && m_entirety != 1)
			{
				SleepCout("0 �� 1����͂��Ă��������B");
			}
			else break;
		}


		if (m_entirety == 0)
		{
			std::vector<std::vector<std::string>> map;
			map.clear();

			if (!FileReaderWrite::FileCSVWrite("save.csv", map)) return -1;
		}
	}


	// �Q�[���̊J�n�錾
	SleepCout("�͂��߂�");


	// ��
	for (int i = 0; i != 100; ++i)
	{
		SleepNull(20);
	}
	SleepBar();


	return 1;
}
