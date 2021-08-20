
#include<DebugTools.h>

int main()
{
	dbg::DebugMemoryLeak();

	int a = 1;
	int b = 10;

	//�f�o�b�O�E�B���h�E�Ƀp�����[�^��\������B
	int answer = 11;
	OutputDebugStringEx(_T("\n�y�p�����[�^�m�F�z\na = %d, b = %d, answer = %d\n"), a, b, answer);

	//�����ł́ua + b == answer�v�������Ɛ������Ă���̂ŁA�x���E�B���h�E�͕\������Ȃ��B
	_ASSERT_EXPR_EX(a + b == answer, _T("a + b == %d �ł͂���܂���B"), answer);

	//�f�o�b�O�E�B���h�E�Ƀp�����[�^��\������B
	answer = 0;
	OutputDebugStringEx(_T("\n�y�p�����[�^�m�F�z\na = %d, b = %d, answer = %d\n\n"), a, b, answer);

	//�����ł́ua + b == answer�v���������Ă��Ȃ��̂ŁA�x���E�B���h�E���\�������B
	_ASSERT_EXPR_EX(a + b == answer, _T("a + b == %d �ł͂���܂���B"), answer);
}
