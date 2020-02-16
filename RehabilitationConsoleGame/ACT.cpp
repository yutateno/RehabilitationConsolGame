#include "ACT.hpp"



/// ----------------------------------------------------------------------------------------------
std::string ACT::CoutAct(int t_act)
{
	std::random_device rnd;     // �񌈒�I�ȗ���������𐶐�
	std::mt19937 mt(rnd());     //  �����Z���k�E�c�C�X�^��32�r�b�g�ŁA�����͏����V�[�h�l
	std::uniform_int_distribution<> rand0600(0, 600);        // [0, 5] �͈͂̈�l����
	int temp = rand0600(mt);


	switch (t_act)
	{
		// �v���O���}
	case 1:
		if (temp < 20) return "�Q�[���V�ׁI";
		else if (temp >= 20 && temp < 40) return "�C���x�[�_�[�Q�[������Ă�������";
		else if (temp >= 40 && temp < 60) return "�e�g���X����Ă�������";
		else if (temp >= 60 && temp < 80) return "�p�b�N�}������Ă�������";
		else if (temp >= 80 && temp < 100) return "���X�N���[���V���[�e�B���O����Ă�������";
		else if (temp >= 100 && temp < 120) return "�c�X�N���[���V���[�e�B���O����Ă�������";
		else if (temp >= 120 && temp < 140) return "���Ǝl�p�`�̂����蔻�����Ă�������";
		else if (temp >= 140 && temp < 160) return "�ȉ~�Ɖ~�̂����蔻�����Ă�������";
		else if (temp >= 160 && temp < 180) return "xbox�R���g���[���[�Ńo�C�u���[�V�����̏�������Ă�������";
		else if (temp >= 180 && temp < 200) return "����܂łɍ�����Q�[���̂ǂꂩ���A���h���C�h�ŗV�ׂ�悤�ɂ��Ă�������";
		else if (temp >= 200 && temp < 220) return "�l�p�`�Ƒȉ~�̂����蔻�������Ă�������";
		else if (temp >= 220 && temp < 240) return "�C�����̂����W�����v����������Ă�������";
		else if (temp >= 240 && temp < 260) return "�O�p�`�Ƌ��̂����蔻�������Ă�������";
		else if (temp >= 260 && temp < 280) return "�u���b�N����������Ă�������";
		else if (temp >= 280 && temp < 300) return "XOR�𗘗p�����Í�������������Ă�������";
		else if (temp >= 300 && temp < 320) return "�D���ȃQ�[����Ђ�񋓂��A���̉�Ђ̃z�[���y�[�W�𒭂߂Ă�������";
		else if (temp >= 320 && temp < 340) return "�D���ȃQ�[����񋓂��A�Ȃ��D���Ȃ̂��ڂ��������Ă�������";
		else if (temp >= 340 && temp < 360) return "Chrome�̃l�b�g���[�N��Q���ɏo�Ă��鋰���Q�[���Ɠ����悤�Ȃ��̂�����Ă�������";
		else if (temp >= 360 && temp < 380) return "Qiita�ƌ������Ă��̃y�[�W����ʔ������ȋL���𒭂߂Ă�������";
		else if (temp >= 380 && temp < 400) return "�q�b�g�X�g�b�v����������Ă�������";
		else if (temp >= 400 && temp < 420) return "��ʗh�炵����������Ă�������";
		else if (temp >= 420 && temp < 440) return "�^�X�N�Ǘ��c�[��������Ă�������";
		else if (temp >= 440 && temp < 460) return "CEDiL���������Ă��̃y�[�W����ʔ������ȋL���𒭂߂Ă�������";
		else if (temp >= 460 && temp < 480) return "https://www.youtube.com/channel/UCqNJ5JdhNakfPQBYwroizPQ �ł����Ă�������";
		else if (temp >= 480 && temp < 500) return "https://www.youtube.com/channel/UCmHaPXvwn9_4pMNAV6ewgoA �ł����Ă�������";
		else if (temp >= 500 && temp < 520) return "https://www.youtube.com/channel/UCRz5gJ5vPOO0cg8oiT4JmsA �ł����Ă�������";
		else if (temp >= 520 && temp < 540) return "https://www.youtube.com/channel/UCSWofKKo9POJlkyX2mz1cOQ �ł����Ă�������";
		else if (temp >= 540 && temp < 560) return "BGM�ɃG�t�F�N�g�������āA���ɓ����Ă����������悤�ȉ��𗬂��悤�ȏ���������Ă�������";
		else if (temp >= 560 && temp < 580) return "�t�F�[�h�A�E�g�ƃt�F�[�h�C����sin�g�̂悤�ȗ���Ő؂�ւ���悤�ɂ��Ă�������";
		else if (temp >= 580 && temp <= 600) return "�V�[���̐؂�ւ��ŕK��BGM�������������Ă����悤�ȏ���������Ă��������A�Ԃ؂�_��";
		break;


		// �f�U�C�i�[
	case 2:
		if (temp < 20) return "�Q�[���V�ׁI";
		else if (temp >= 20 && temp < 40) return "�D���ȃQ�[����Ђ�񋓂��A���̉�Ђ̃z�[���y�[�W�𒭂߂Ă�������";
		else if (temp >= 40 && temp < 60) return "�D���ȃQ�[����񋓂��A�Ȃ��D���Ȃ̂��ڂ��������Ă�������";
		else if (temp >= 60 && temp < 80) return "itch.io�ƌ������Ă��̃y�[�W����ʔ������ȃQ�[����V��ł݂Ă�������";
		else if (temp >= 80 && temp < 100) return "Udemy�ƌ������Ă��̃y�[�W����ʔ������Ȃ��̂𒭂߂Ă��������A����悭�Δ���";
		else if (temp >= 100 && temp < 120) return "Qiita�ƌ������Ă��̃y�[�W����ʔ������ȋL���𒭂߂Ă�������";
		else if (temp >= 120 && temp < 140) return "CEDiL���������Ă��̃y�[�W����ʔ������ȋL���𒭂߂Ă�������";
		else if (temp >= 140 && temp < 160) return "https://www.youtube.com/channel/UCqNJ5JdhNakfPQBYwroizPQ �ł����Ă�������";
		else if (temp >= 160 && temp < 180) return "https://www.youtube.com/channel/UCPljC4d-GgdFgVqtoCZ3m_w �ł����Ă�������";
		else if (temp >= 180 && temp < 200) return "https://www.youtube.com/channel/UCCdskievdAtH6AtPeEfTqEg �ł����Ă�������";
		else if (temp >= 200 && temp < 220) return "https://www.youtube.com/channel/UCmHaPXvwn9_4pMNAV6ewgoA �ł����Ă�������";
		else if (temp >= 220 && temp < 240) return "https://www.youtube.com/channel/UCRz5gJ5vPOO0cg8oiT4JmsA �ł����Ă�������";
		else if (temp >= 240 && temp < 260) return "https://www.youtube.com/channel/UCSWofKKo9POJlkyX2mz1cOQ �ł����Ă�������";
		else if (temp >= 260 && temp < 280) return "�΂ߏォ��̎��_��8���������̗E�҂�����Ă�������";
		else if (temp >= 280 && temp < 300) return "�΂ߏォ��̎��_��128x64�Ő����܂������Ă�������";
		else if (temp >= 300 && temp < 320) return "�����������E�҂��A���҂��Ɍ����͂�����āA���������A�j���[�V����������Ă�������";
		else if (temp >= 320 && temp < 340) return "���(https://www.youtube.com/watch?v=lqYLmZlFNLA)�̎�l�����h�b�g�G�ō���Ă�������";
		else if (temp >= 340 && temp < 360) return "�{�C�h�E�e�����E���ihttps://www.youtube.com/watch?v=D3HATlNTXmk�j�̃g���R���h�b�g�G�ō���Ă�������";
		else if (temp >= 360 && temp < 380) return "�{�C�h�E�e�����E���ihttps://www.youtube.com/watch?v=D3HATlNTXmk�j�̃��{�b�g���h�b�g�G�ō���Ă�������";
		else if (temp >= 380 && temp < 400) return "�z���E�i�C�g�ihttps://www.youtube.com/watch?v=UAO2urG23S4�j��3D���f��������Ă�������";
		else if (temp >= 400 && temp < 420) return "�y���h��Ă��鐅�ʂƕ��s�ɂ���ėh��鐅�ʂ�����Ă�������";
		else if (temp >= 420 && temp < 440) return "����܂łɍ�����̒��ň�Ԋ撣������̃|�X�^�[������Ă�������";
		else if (temp >= 440 && temp < 460) return "�p�b�Ɩڂɂ������̂��h�b�g���G��3D�ō���Ă�������";
		else if (temp >= 460 && temp < 480) return "��������Ɏ����Ă���Ƃ��āA�U��������A�j���[�V����������Ă�������";
		else if (temp >= 480 && temp < 500) return "�I���L�����ł��D���ȃL�����ł��������炻�̎q�ɖX�q�����Ă����Ă�������";
		else if (temp >= 500 && temp < 520) return "�I���L�����ł��D���ȃL�����ł��������炻�̎q�ɉH�����Ă����Ă�������";
		else if (temp >= 520 && temp < 540) return "�I���L�����ł��D���ȃL�����ł��������炻�̎q�Ƀ��{�������Ă����Ă�������";
		else if (temp >= 540 && temp < 560) return "����܂ł̃L�����N�^�[�ɑ΂���2P�J���[������Ă�������";
		else if (temp >= 560 && temp < 580) return "�����̖��h���l���Ă݂�";
		else if (temp >= 580 && temp <= 600) return "�G���ۂ��G������Ă�������";
		break;


		// �T�E���h
	case 3:
		if (temp < 20) return "�Q�[���V�ׁI";
		else if (temp >= 20 && temp < 40) return "�D���ȃQ�[����Ђ�񋓂��A���̉�Ђ̃z�[���y�[�W�𒭂߂Ă�������";
		else if (temp >= 40 && temp < 60) return "�D���ȃQ�[����񋓂��A�Ȃ��D���Ȃ̂��ڂ��������Ă�������";
		else if (temp >= 60 && temp < 80) return "itch.io�ƌ������Ă��̃y�[�W����ʔ������ȃQ�[����V��ł݂Ă�������";
		else if (temp >= 80 && temp < 100) return "Udemy�ƌ������Ă��̃y�[�W����ʔ������Ȃ��̂𒭂߂Ă��������A����悭�Δ���";
		else if (temp >= 100 && temp < 120) return "Qiita�ƌ������Ă��̃y�[�W����ʔ������ȋL���𒭂߂Ă�������";
		else if (temp >= 120 && temp < 140) return "�[���_�̓`���u���X�I�u�U���C���h�̃C���^���N�e�B�u�T�E���h�ɂ��Č������ċL���𒭂߂Ă�������";
		else if (temp >= 140 && temp < 160) return "CEDiL���������Ă��̃y�[�W����ʔ������ȋL���𒭂߂Ă�������";
		else if (temp >= 160 && temp < 180) return "https://www.youtube.com/channel/UCur4IQj5lSk3xMyh3p0qSmQ �ł����Ă�������";
		else if (temp >= 180 && temp < 200) return "https://www.youtube.com/channel/UCmHaPXvwn9_4pMNAV6ewgoA �ł����Ă�������";
		else if (temp >= 200 && temp < 220) return "https://www.youtube.com/channel/UCRz5gJ5vPOO0cg8oiT4JmsA �ł����Ă�������";
		else if (temp >= 220 && temp < 240) return "https://www.youtube.com/channel/UCSWofKKo9POJlkyX2mz1cOQ �ł����Ă�������";
		else if (temp >= 240 && temp < 260) return "�����܂肩��W�����v����u�Ԃ�SE������Ă�������";
		else if (temp >= 260 && temp < 280) return "�����������n�т𑖂�SE������Ă�������";
		else if (temp >= 280 && temp < 300) return "�O�ŉJ���~���Ă���Z�ɓ��ɂ���Ƃ��ɗ����BGM������Ă�������";
		else if (temp >= 300 && temp < 320) return "https://twitter.com/CAPCOM_SOUND �ł����߂Ă�������";
		else if (temp >= 320 && temp < 340) return "�����Ƌ������Ԃ���SE������Ă�������";
		else if (temp >= 340 && temp < 360) return "�����󓴂̕ǂ�@���ĕ�������SE������Ă�������";
		else if (temp >= 360 && temp < 380) return "�Ɛ����܂�ɒ��n����u�Ԃ�SE������Ă�������";
		else if (temp >= 380 && temp < 400) return "�����󓴂���Ȃ��ǂ�@���ĕ�������SE������Ă�������";
		else if (temp >= 400 && temp < 420) return "���ʂ̏����q�[���ŕ������Ƃ��ɕ�������SE������Ă�������";
		else if (temp >= 420 && temp < 440) return "�����܂�𑖂�SE������Ă�������";
		else if (temp >= 440 && temp < 460) return "�r�����烋�[�v�ʒu������r���Ń��[�v�I��肪����悤��BGM������Ă��������i�����Ȃ���΂�����C���[�W�Ƃ��� https://www.youtube.com/watch?v=7MxLG9qgHQ0�j";
		else if (temp >= 460 && temp < 480) return "https://www.youtube.com/watch?v=_3Vi6l3vZDc ���e���|�𑬂߂Ė����Ȋ����ɃA�����W����BGM������Ă�������";
		else if (temp >= 480 && temp < 500) return "https://www.youtube.com/watch?v=77ZmyNytfLs ����Â��C���[�W���������A�����W��BGM������Ă�������";
		else if (temp >= 500 && temp < 520) return "https://www.youtube.com/watch?v=pDgflOcHNnM ���s�A�m�ŃA�����W����BGM������Ă��������i��ʂ͗Ⴆ�Α����j";
		else if (temp >= 520 && temp < 540) return "https://www.youtube.com/watch?v=Y0viP67wNqk ���s�A�m�g��Ȃ��ŃA�����W����BGM������Ă��������i��ʂ͗Ⴆ�΃��X�{�X�j";
		else if (temp >= 540 && temp < 560) return "https://www.youtube.com/watch?v=quuobMmZ0nU ���ۃp�N�����č���Ă��������A�A�����W���Ă������A�ʔ���";
		else if (temp >= 560 && temp < 580) return "�h�A�̊J��SE������āA������g����BGM������Ă�������";
		else if (temp >= 580 && temp <= 600) return "�R�[�q�[�𕦂���SE������āA������g����BGM������Ă�������";
		break;


	default:
		break;
	}

	return "�G���[���˂�";
}
