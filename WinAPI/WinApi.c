#include <Windows.h>
int WINAPI wWinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
{
	
	switch (MessageBox(NULL, L"������ ���", L"�����������", MB_YESNOCANCEL))
	{
	case(IDYES):
		MessageBox(NULL, L"�� ������ ������ '��'", L"����������", MB_OK);
		break;
	case(IDNO):
		MessageBox(NULL, L"�� ������ ������ '���'", L"����������", MB_OK);
		break;
	case(IDCANCEL):
		MessageBox(NULL, L"�� ������ ������ '������'", L"����������", MB_OK);
		break;
	default:
		break;
	}
}