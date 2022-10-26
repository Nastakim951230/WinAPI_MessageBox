#include <Windows.h>
int WINAPI wWinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
{
	
	switch (MessageBox(NULL, L"Привет мир", L"Приветствие", MB_YESNOCANCEL))
	{
	case(IDYES):
		MessageBox(NULL, L"вы нажали кнопку 'ДА'", L"Объявление", MB_OK);
		break;
	case(IDNO):
		MessageBox(NULL, L"вы нажали кнопку 'НЕТ'", L"Объявление", MB_OK);
		break;
	case(IDCANCEL):
		MessageBox(NULL, L"вы нажали кнопку 'ОТМЕНА'", L"Объявление", MB_OK);
		break;
	default:
		break;
	}
}