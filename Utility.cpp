#include "Utility.h"
#include <comdef.h>
#include <Wbemidl.h>

#pragma comment(lib, "wbemuuid.lib")

#include "SDK/mscorlib/System_Text_ASCIIEncoding.h"
#include "SDK/mscorlib/System_Security_Cryptography_MD5.h"
#include "SDK/mscorlib/System_Security_Cryptography_MD5CryptoServiceProvider.h"
#include <time.h>
#include <iostream>

using namespace mscorlib::System::Text;
using namespace mscorlib::System::Security::Cryptography;

Il2CppObject* GetValue(const char* field, Il2CppObject* object)
{
    return il2cpp_field_get_value_object(il2cpp_class_get_field_from_name(object->klass, field), object);
}

Il2CppObject* GetValue(const char* field, Il2CppClass* klass)
{
    return il2cpp_field_get_value_object(il2cpp_class_get_field_from_name(klass, field), nullptr);
}

void SetValue(const char* field, Il2CppObject* object, void* value)
{
    il2cpp_field_set_value(object, il2cpp_class_get_field_from_name(object->klass, field), value);
}

String* CreateString(const wchar_t* str)
{
    return (String*)il2cpp_string_new_utf16((Il2CppChar*)str, std::wcslen(str));
}

String* CreateString(const char* str)
{
    return (String*)il2cpp_string_new(str);
}

MH_STATUS CreateHook(void* hMethod, void* nMethod, void** original)
{
    MH_STATUS status;
    if ((status = MH_CreateHook(hMethod, nMethod, original)) != MH_STATUS::MH_OK) return status;
    status = MH_EnableHook(hMethod);
    return status;
}

void DrawString(Rect pos, String* str, Color color, int textSize, bool dropShadow, bool outlined) 
{
    GUIStyle* style = (GUIStyle*)il2cpp_object_new(GUIStyle::GetIl2CppClass());
    style->_ctor(GUI::get_skin()->get_label());
    style->set_alignment(TextAnchor::MiddleCenter);
    style->set_fontSize(textSize);
	Color black = Color::get_black();
	black.a = color.a;
    style->get_normal()->set_textColor(black);

    if (dropShadow)
    {
        GUI::Label({pos.m_XMin + 1.f, pos.m_YMin + 1.f, pos.m_Width , pos.m_Height }, str, style);
    }

    if (outlined) 
    {
        GUI::Label({ pos.m_XMin + 1.f, pos.m_YMin, pos.m_Width , pos.m_Height }, str, style);
        GUI::Label({ pos.m_XMin, pos.m_YMin + 1.f, pos.m_Width , pos.m_Height }, str, style);
        GUI::Label({ pos.m_XMin, pos.m_YMin - 1.f, pos.m_Width , pos.m_Height }, str, style);
    }
    style->get_normal()->set_textColor(color);
    GUI::Label({ pos.m_XMin, pos.m_YMin, pos.m_Width , pos.m_Height }, str, style);
}

float SignedAngle(Vector2 from, Vector2 to) {
    float num = Vector2::Angle(from, to);
    float num2 = Mathf::Sign(from.x * to.y - from.y * to.x);
    return num * num2;
}

void DrawLine(Vector2 pointA, Vector2 pointB, float thickness, Color color)
{
    float width = Vector2::Distance(pointA, pointB);
    Vector2 vector = { pointA.x + 1.f, pointA.y };
    Vector2 vector2 = { pointB.x - pointA.x, pointB.y - pointA.y };
    Vector2 vector3 = { vector.x - pointA.x, vector.y - pointA.y };;
    float angle = -SignedAngle(vector2, vector3);

    Rect rect = { pointA.x, pointA.y - thickness / 2.f, width, (float)thickness };

    Matrix4x4 matrix = GUI::get_matrix();
    GUIUtility::RotateAroundPivot(angle, pointA);

    GUI::set_color(color);
    GUI::DrawTexture(rect, Texture2D::get_whiteTexture());

    GUI::set_color(Color::get_white());
    GUI::set_matrix(matrix);
}

Vector3 Quaternion_Multiply_Vector3(Quaternion rotation, Vector3 point)
{
	float num = rotation.x * 2.f;
	float num2 = rotation.y * 2.f;
	float num3 = rotation.z * 2.f;
	float num4 = rotation.x * num;
	float num5 = rotation.y * num2;
	float num6 = rotation.z * num3;
	float num7 = rotation.x * num2;
	float num8 = rotation.x * num3;
	float num9 = rotation.y * num3;
	float num10 = rotation.w * num;
	float num11 = rotation.w * num2;
	float num12 = rotation.w * num3;
	Vector3 result;
	result.x = (1.f - (num5 + num6)) * point.x + (num7 - num12) * point.y + (num8 + num11) * point.z;
	result.y = (num7 + num12) * point.x + (1.f - (num4 + num6)) * point.y + (num9 - num10) * point.z;
	result.z = (num8 - num11) * point.x + (num9 + num10) * point.y + (1.f - (num4 + num5)) * point.z;
	return result;
}

Vector3 RotateLine(Vector3 a, Vector3 b, Quaternion rotate) 
{
	return Quaternion_Multiply_Vector3(rotate, a - b) + b;
}

void Draw3DBox(Vector3 pos, Vector3 startPos, Vector3 endPos, Quaternion rot, Color color, float thickness) {
	Vector3 A0 = RotateLine(startPos, pos, rot);
	Vector3 B0 = RotateLine({ endPos.x, startPos.y, startPos.z }, pos, rot);
	Vector3 C0 = RotateLine({ startPos.x, startPos.y, endPos.z }, pos, rot);
	Vector3 D0 = RotateLine({ endPos.x, startPos.y, endPos.z }, pos, rot);

	Vector3 A1 = RotateLine({ startPos.x, endPos.y, startPos.z }, pos, rot);
	Vector3 B1 = RotateLine({ endPos.x, endPos.y, startPos.z }, pos, rot);
	Vector3 C1 = RotateLine({ startPos.x, endPos.y, endPos.z }, pos, rot);
	Vector3 D1 = RotateLine(endPos, pos, rot);

	A0 = Camera::get_main()->WorldToScreenPoint(A0);
	B0 = Camera::get_main()->WorldToScreenPoint(B0);
	C0 = Camera::get_main()->WorldToScreenPoint(C0);
	D0 = Camera::get_main()->WorldToScreenPoint(D0);
	A1 = Camera::get_main()->WorldToScreenPoint(A1);
	B1 = Camera::get_main()->WorldToScreenPoint(B1);
	C1 = Camera::get_main()->WorldToScreenPoint(C1);
	D1 = Camera::get_main()->WorldToScreenPoint(D1);

	if (B0.z > 0 && A1.z > 0 && C0.z > 0 && B1.z > 0 && D0.z > 0 && C1.z > 0 && A0.z > 0 && D1.z > 0) {
		float height = Screen::get_height();
		A0.y = height - A0.y;
		B0.y = height - B0.y;
		C0.y = height - C0.y;
		D0.y = height - D0.y;
		A1.y = height - A1.y;
		B1.y = height - B1.y;
		C1.y = height - C1.y;
		D1.y = height - D1.y;
		DrawLine({ A0.x, A0.y }, { B0.x, B0.y }, thickness, color);
		DrawLine({ A0.x, A0.y }, { A1.x, A1.y }, thickness, color);
		DrawLine({ A0.x, A0.y }, { C0.x, C0.y }, thickness, color);
		DrawLine({ B0.x, B0.y }, { B1.x, B1.y }, thickness, color);
		DrawLine({ B0.x, B0.y }, { D0.x, D0.y }, thickness, color);
        DrawLine({ C0.x, C0.y }, { D0.x, D0.y }, thickness, color);
        DrawLine({ C0.x, C0.y }, { C1.x, C1.y }, thickness, color);
        DrawLine({ D0.x, D0.y }, { D1.x, D1.y }, thickness, color);
		DrawLine({ A1.x, A1.y }, { B1.x, B1.y }, thickness, color);
		DrawLine({ A1.x, A1.y }, { C1.x, C1.y }, thickness, color);
		DrawLine({ B1.x, B1.y }, { D1.x, D1.y }, thickness, color);
		DrawLine({ C1.x, C1.y }, { D1.x, D1.y }, thickness, color);
	}
}

std::wstring utf8_to_utf16(const std::string& utf8)
{
	std::vector<unsigned long> unicode;
	size_t i = 0;
	while (i < utf8.size())
	{
		unsigned long uni;
		size_t todo;
		bool error = false;
		unsigned char ch = utf8[i++];
		if (ch <= 0x7F)
		{
			uni = ch;
			todo = 0;
		}
		else if (ch <= 0xBF)
		{
			throw std::logic_error("not a UTF-8 string");
		}
		else if (ch <= 0xDF)
		{
			uni = ch & 0x1F;
			todo = 1;
		}
		else if (ch <= 0xEF)
		{
			uni = ch & 0x0F;
			todo = 2;
		}
		else if (ch <= 0xF7)
		{
			uni = ch & 0x07;
			todo = 3;
		}
		else
		{
			throw std::logic_error("not a UTF-8 string");
		}
		for (size_t j = 0; j < todo; ++j)
		{
			if (i == utf8.size())
				throw std::logic_error("not a UTF-8 string");
			unsigned char ch = utf8[i++];
			if (ch < 0x80 || ch > 0xBF)
				throw std::logic_error("not a UTF-8 string");
			uni <<= 6;
			uni += ch & 0x3F;
		}
		if (uni >= 0xD800 && uni <= 0xDFFF)
			throw std::logic_error("not a UTF-8 string");
		if (uni > 0x10FFFF)
			throw std::logic_error("not a UTF-8 string");
		unicode.push_back(uni);
	}
	std::wstring utf16;
	for (size_t i = 0; i < unicode.size(); ++i)
	{
		unsigned long uni = unicode[i];
		if (uni <= 0xFFFF)
		{
			utf16 += (wchar_t)uni;
		}
		else
		{
			uni -= 0x10000;
			utf16 += (wchar_t)((uni >> 10) + 0xD800);
			utf16 += (wchar_t)((uni & 0x3FF) + 0xDC00);
		}
	}
	return utf16;
}

std::wstring GetWMIProperty(const wchar_t* className, const wchar_t* propertyName) {
	HRESULT hres;
	IWbemLocator* pLoc = NULL;
	IWbemServices* pSvc = NULL;
	IEnumWbemClassObject* pEnumerator = NULL;
	std::wstring result;
	std::wstring query;
	bool initialized = true;

	IWbemClassObject* pclsObj = NULL;
	ULONG uReturn = 0;

	hres = CoInitializeEx(0, COINIT_MULTITHREADED);
	if (FAILED(hres)) {
		initialized = false;

		if (hres != RPC_E_CHANGED_MODE)
			goto cleanup;
	}
	else {
		hres = CoInitializeSecurity(
			NULL,
			-1,                          // COM authentication
			NULL,                        // Authentication services
			NULL,                        // Reserved
			RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication 
			RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation  
			NULL,                        // Authentication info
			EOAC_NONE,                   // Additional capabilities 
			NULL                         // Reserved
		);

		if (FAILED(hres) && hres != RPC_E_TOO_LATE) {
			goto cleanup;
		}
	}

	hres = CoCreateInstance(
		CLSID_WbemLocator,
		0,
		CLSCTX_INPROC_SERVER,
		IID_IWbemLocator, (LPVOID*)&pLoc);

	if (FAILED(hres)) {
		goto cleanup;
	}

	hres = pLoc->ConnectServer(
		bstr_t(L"ROOT\\CIMV2"),  // Object path of WMI namespace
		NULL,                    // User name. NULL = current user
		NULL,                    // User password. NULL = current
		0,                       // Locale. NULL indicates current
		NULL,                    // Security flags.
		0,                       // Authority (for example, Kerberos)
		0,                       // Context object 
		&pSvc                    // pointer to IWbemServices proxy
	);

	if (FAILED(hres)) {
		goto cleanup;
	}

	hres = CoSetProxyBlanket(
		pSvc,                        // Indicates the proxy to set
		RPC_C_AUTHN_WINNT,           // RPC_C_AUTHN_xxx
		RPC_C_AUTHZ_NONE,            // RPC_C_AUTHZ_xxx
		NULL,                        // Server principal name 
		RPC_C_AUTHN_LEVEL_CALL,      // RPC_C_AUTHN_LEVEL_xxx 
		RPC_C_IMP_LEVEL_IMPERSONATE, // RPC_C_IMP_LEVEL_xxx
		NULL,                        // client identity
		EOAC_NONE                    // proxy capabilities 
	);

	if (FAILED(hres)) {
		goto cleanup;
	}

	query = (std::wstring)L"SELECT * FROM " + className;

	hres = pSvc->ExecQuery(
		bstr_t("WQL"),
		bstr_t(query.c_str()),
		WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY,
		NULL,
		&pEnumerator);

	if (FAILED(hres)) {
		goto cleanup;
	}


	while (pEnumerator) {
		HRESULT hr = pEnumerator->Next(WBEM_INFINITE, 1, &pclsObj, &uReturn);

		if (uReturn == 0) {
			break;
		}

		VARIANT vtProp;
		CIMTYPE pType;
		long plFlavor;
		//pclsObj->ge
		hr = pclsObj->Get(propertyName, 0, &vtProp, &pType, &plFlavor);
		if (SUCCEEDED(hr) && vtProp.vt == VT_BSTR) {
			result = vtProp.bstrVal;
			break;
		}

		VariantClear(&vtProp);

		pclsObj->Release();
	}

cleanup:
	if (pSvc)
		pSvc->Release();
	if (pLoc)
		pLoc->Release();
	if (pEnumerator)
		pEnumerator->Release();
	if (initialized)
		CoUninitialize();

	return result;
}

std::string GetHexString(IL2CPP::Array<uint8_t>* bt)
{
	std::string s = "";
	for (int i = 0; i < bt->max_length; i++)
	{
		char b = bt->vector[i];
		int n, n1, n2;
		n = (int)b;
		n1 = n & 15;
		n2 = (n >> 4) & 15;
		if (n2 > 9)
			s += ((char)(n2 - 10 + (int)'A'));
		else
			s += std::to_string(n2);
		if (n1 > 9)
			s += ((char)(n1 - 10 + (int)'A'));
		else
			s += std::to_string(n1);
	}
	return s;
}

std::string GetHash(std::wstring s)
{
	auto str = CreateString(s.c_str());
	auto bytes = Encoding::get_ASCII()->GetBytes(str);
	return GetHexString(MD5::Create()->ComputeHash(bytes));
}

std::string Gethwid() {

	static std::string result = "";

	if (result.size() <= 0)
	{
		std::wstring model = GetWMIProperty(L"Win32_DiskDrive", L"Model");
		std::wstring manufacturer = GetWMIProperty(L"Win32_DiskDrive", L"Manufacturer");

		std::wstring manufacturer2 = GetWMIProperty(L"Win32_BaseBoard", L"Manufacturer");
		std::wstring Name = GetWMIProperty(L"Win32_BaseBoard", L"Name");
		std::wstring SerialNumber = GetWMIProperty(L"Win32_BaseBoard", L"SerialNumber");

		std::wstring Manufacturer3 = GetWMIProperty(L"Win32_BIOS", L"Manufacturer");
		std::wstring Name2 = GetWMIProperty(L"Win32_BIOS", L"Name");
		std::wstring SerialNumber2 = GetWMIProperty(L"Win32_BIOS", L"SerialNumber");

		std::wstring hwidWStr = L"DISK >> " + model + manufacturer + L"\nBIOS >> " + Manufacturer3 + Name2 + SerialNumber2 + L"\nBASE >> " + manufacturer2 + Name + SerialNumber;

		result = GetHash(hwidWStr);
	}
	return result;
}

void ASSWriteConsole(const char* msg) 
{
	char tmpbuf[128];
	_strtime_s(tmpbuf, 128);
	//asctime_s(timebuf, 26, &newtime);
	std::cout << "[" << tmpbuf << "] [ASS] " << msg << std::endl;
}

std::string WidestringToString(std::wstring wstr)
{
	if (wstr.empty())
	{
		return std::string();
	}
#if defined WIN32
	int size = WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, &wstr[0], wstr.size(), NULL, 0, NULL, NULL);
	std::string ret = std::string(size, 0);
	WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, &wstr[0], wstr.size(), &ret[0], size, NULL, NULL);
#else
	size_t size = 0;
	_locale_t lc = _create_locale(LC_ALL, "en_US.UTF-8");
	errno_t err = _wcstombs_s_l(&size, NULL, 0, &wstr[0], _TRUNCATE, lc);
	std::string ret = std::string(size, 0);
	err = _wcstombs_s_l(&size, &ret[0], size, &wstr[0], _TRUNCATE, lc);
	_free_locale(lc);
	ret.resize(size - 1);
#endif
	return ret;
}

std::string GetRequest(std::string s)
{
	return s + "&h=" + GetHash(utf8_to_utf16(s));
}

SHORT GetAsyncKeyStateP(int key) 
{
	if (GetForegroundWindow() == curretWindow)
	{
		return GetAsyncKeyState(key);
	}

	return 0;
}