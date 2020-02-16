#include "Game.hpp"



/// ----------------------------------------------------------------------------------------------
void Game::Update()
{
	// �G�o��
	SleepBar();
	SleepCout("�G�� ���ꂽ�I");
	SleepNull();
	ASCIIArt::Draw(m_enemy);
	SleepNull();
	SleepCout("�G�� �ۑ�� �ۂ��Ă����I");
	SleepCout("�N�� ������� �R�����H");
	SleepCout("�R���Ȃ� 1��");
	SleepCout("�󂯓����Ȃ� 0��");
	while (true)
	{
		InputFail(m_entirety);

		if (m_entirety != 0 && m_entirety != 1)
		{
			SleepCout("0 �� 1����͂��Ă��������B");
		}
		else break;
	}


	// ��
	for (int i = 0; i != 4; ++i)
	{
		SleepNull();
	}


	// �ۑ���󂯓����
	if (m_entirety == 0)
	{
		// ��E�̊m�F
		SleepNull();
		ASCIIArt::Draw(m_enemy);
		SleepNull();
		SleepCout("�󂯓����I�H");
		SleepCout("������");
		SleepCout("�Ȃ� �܂� �N�� ��E�� ������");
		SleepCout("�v���O���}�[�Ȃ� 1��");
		SleepCout("�f�U�C�i�[�Ȃ� 2��");
		SleepCout("�T�E���h�N���G�C�^�[�Ȃ� 3��");
		while (true)
		{
			InputFail(m_entirety);

			if (m_entirety != 1 && m_entirety != 2 && m_entirety != 3)
			{
				SleepCout("1 �� 2 �� 3�� ���͂��� ���������B");
			}
			else break;
		}


		// ��
		for (int i = 0; i != 4; ++i)
		{
			SleepNull();
		}


		// �ۑ���
		SleepNull();
		ASCIIArt::Draw(m_enemy);
		SleepNull();
		SleepCout("�ł� �N�ւ� �ۑ�� ���ꂾ");
		SleepNull();
		std::string str = ACT::CoutAct(m_entirety);
		SleepCout(str);
		SleepNull();
		SleepCout("�t�@�C���ɂ� �ǋL���Ƃ����� �Y��Ȃ��悤�ɂ�");
		SleepCout("���񂶂�");


		// �ۑ���t�@�C���ɓ���
		FileReaderWrite::Init();
		std::vector<std::vector<std::string>> map;
		if (!FileReaderWrite::FileCSVRead("save.csv"))
		{
			map.clear();
		}
		else
		{
			map = FileReaderWrite::GetMapData();
		}
		std::vector<std::string> vstr;
		if (m_entirety == 1)
		{
			vstr.push_back("�v���O���}�[");
		}
		else if (m_entirety == 2)
		{
			vstr.push_back("�f�U�C�i�[");
		}
		else if (m_entirety == 3)
		{
			vstr.push_back("�T�E���h�N���G�C�^�[");
		}
		vstr.push_back(str);
		map.push_back(vstr);

		FileReaderWrite::FileCSVWrite("save.csv", map);

		return;
	}
	// �ۑ���󂯓���Ȃ�
	else
	{
		// �]�k
		SleepNull();
		ASCIIArt::Draw(m_enemy);
		SleepNull();
		SleepCout("�󂯓���Ȃ��Ȃ� �킨����");
		SleepCout("���ǉ����A�C�f�B�A�v�����Ȃ��܂܂���Ȃ悭������Ȃ��̍�肾��������키���@����������ɂ��K���Ȃ̂����ǂ�����ƕt�������Ă�");
		SleepNull();
		SleepCout("�Ƃ������Ƃ� ��������� �U���");
		SleepNull();
		SleepCout("������ �������� �Ƃ������� ����(0~6)�� 100�ق� ��ɓ������� SPACE �� ������ ���߂Ă�");
		SleepCout("cin�� �������~�߂Ă邩�� �K���ȕ�������� Enter�� �������� �n�܂��");
		std::string tre = "";
		std::cin >> tre;


		// ��������̒l�����߂�
		int count = 0;
		while (true)
		{
			SleepNull();
			SleepCout("�N�̃^�C�~���O�� SPACE�L�[�� �����Ă�");
			for (int i = 0; i != 100; ++i)
			{
				m_dice[i] = 0;
				std::random_device rnd;     // �񌈒�I�ȗ���������𐶐�
				std::mt19937 mt(rnd());     //  �����Z���k�E�c�C�X�^��32�r�b�g�ŁA�����͏����V�[�h�l
				std::uniform_int_distribution<> rand06(0, 6);        // [0, 5] �͈͂̈�l����
				m_dice[i] = rand06(mt);
				std::cout << m_dice[i] << " ";
				Sleep(10);
			}
			std::cout << "\n" << std::flush;
			if (GetAsyncKeyState(VK_SPACE))
			{
				SleepCout("���ꂪ �N�̑I������");
				break;
			}
		}


		// ���l����
		SleepNull();
		ASCIIArt::Draw(m_enemy);
		SleepNull();
		SleepCout("�܂� �G�̐��l�� ���ꂾ��");
		std::string eneStr = std::to_string(m_enemy);
		SleepCout(eneStr);
		SleepNull();
		SleepCout("������ �N�̐��l�� ���ꂾ�I");
		int sum = 0;
		for (int i = 0; i != 100; ++i)
		{
			sum += m_dice[i];
		}
		std::string myStr = std::to_string(sum);
		SleepCout(myStr);
		SleepNull(3000);


		// ��
		for (int i = 0; i != 4; ++i)
		{
			SleepNull();
		}


		// ���s
		if (sum >= m_enemy)
		{
			SleepNull();
			ASCIIArt::Draw(m_enemy);
			SleepNull();
			SleepCout("�ق� �N�̏�����");
			SleepCout("���Ⴀ��");
		}
		else
		{
			// ��E�̊m�F
			SleepNull();
			ASCIIArt::Draw(m_enemy);
			SleepNull();
			SleepCout("�ł� ������ �N�� �ۑ�� �������");
			SleepCout("���̂��߂� �܂� �N�� ��E�� ������");
			SleepCout("�v���O���}�[�Ȃ� 1��");
			SleepCout("�f�U�C�i�[�Ȃ� 2��");
			SleepCout("�T�E���h�N���G�C�^�[�Ȃ� 3��");
			while (true)
			{
				InputFail(m_entirety);

				if (m_entirety != 1 && m_entirety != 2 && m_entirety != 3)
				{
					SleepCout("1 �� 2 �� 3�� ���͂��� ���������B");
				}
				else break;
			}


			// ��
			for (int i = 0; i != 4; ++i)
			{
				SleepNull();
			}
			// �ۑ���
			SleepNull();
			ASCIIArt::Draw(m_enemy);
			SleepNull();
			SleepCout("�ł� �N�� �ۑ�� ���ꂾ");
			SleepNull();
			std::string str = ACT::CoutAct(m_entirety);
			SleepCout(str);
			SleepNull();
			SleepCout("�t�@�C���ɂ� �ǋL���Ƃ����� �Y��Ȃ��悤�ɂ�");
			SleepCout("���񂶂�");


			// �ۑ���t�@�C���ɓ���
			FileReaderWrite::Init();
			std::vector<std::vector<std::string>> map;
			if (!FileReaderWrite::FileCSVRead("save.csv"))
			{
				map.clear();
			}
			else
			{
				map = FileReaderWrite::GetMapData();
			}
			std::vector<std::string> vstr;
			if (m_entirety == 1)
			{
				vstr.push_back("�v���O���}�[");
			}
			else if (m_entirety == 2)
			{
				vstr.push_back("�f�U�C�i�[");
			}
			else if (m_entirety == 3)
			{
				vstr.push_back("�T�E���h�N���G�C�^�[");
			}
			vstr.push_back(str);
			map.push_back(vstr);

			FileReaderWrite::FileCSVWrite("save.csv", map);

			return;
		}
	}
}
