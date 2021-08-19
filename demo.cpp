
#include<DebugTools.h>

int main()
{
	dbg::DebugMemoryLeak();

	int a = 1;
	int b = 10;

	//デバッグウィンドウにパラメータを表示する。
	int answer = 11;
	OutputDebugStringEx(_T("\n【パラメータ確認】\na = %d, b = %d, answer = %d\n"), a, b, answer);

	//ここでは「a + b == answer」がちゃんと成立しているので、警告ウィンドウは表示されない。
	_ASSERT_EXPR_EX(a + b == answer, _T("a + b == %d ではありません。"), answer);

	//デバッグウィンドウにパラメータを表示する。
	answer = 0;
	OutputDebugStringEx(_T("\n【パラメータ確認】\na = %d, b = %d, answer = %d\n\n"), a, b, answer);

	//ここでは「a + b == answer」が成立していないので、警告ウィンドウが表示される。
	_ASSERT_EXPR_EX(a + b == answer, _T("a + b == %d ではありません。"), answer);
}
