#include "System_Globalization_CharUnicodeInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Globalization::CharUnicodeInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Globalization", "CharUnicodeInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Globalization::CharUnicodeInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t mscorlib::System::Globalization::CharUnicodeInfo::InternalConvertToUtf32(mscorlib::System::String* s, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalConvertToUtf32", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Globalization::CharUnicodeInfo::InternalConvertToUtf32(mscorlib::System::String* s, int32_t index, int32_t& charLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalConvertToUtf32", std::vector<std::string> { "System.String", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&charLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Globalization::CharUnicodeInfo::IsWhiteSpace(mscorlib::System::String* s, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsWhiteSpace", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Globalization::CharUnicodeInfo::IsWhiteSpace(wchar_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsWhiteSpace", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&c;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
double mscorlib::System::Globalization::CharUnicodeInfo::InternalGetNumericValue(int32_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetNumericValue", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
double mscorlib::System::Globalization::CharUnicodeInfo::GetNumericValue(wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNumericValue", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		double ret;
		std::memset(&ret, 0, sizeof(double));
		return ret;
	}
	return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::UnicodeCategory mscorlib::System::Globalization::CharUnicodeInfo::GetUnicodeCategory(wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnicodeCategory", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::UnicodeCategory ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::UnicodeCategory));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::UnicodeCategory>(*(mscorlib::System::Globalization::UnicodeCategory*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::UnicodeCategory mscorlib::System::Globalization::CharUnicodeInfo::GetUnicodeCategory(mscorlib::System::String* s, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnicodeCategory", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::UnicodeCategory ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::UnicodeCategory));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::UnicodeCategory>(*(mscorlib::System::Globalization::UnicodeCategory*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::UnicodeCategory mscorlib::System::Globalization::CharUnicodeInfo::InternalGetUnicodeCategory(int32_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetUnicodeCategory", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::UnicodeCategory ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::UnicodeCategory));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::UnicodeCategory>(*(mscorlib::System::Globalization::UnicodeCategory*)il2cpp_object_unbox(returnValue));
}
uint8_t mscorlib::System::Globalization::CharUnicodeInfo::InternalGetCategoryValue(int32_t ch, int32_t offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetCategoryValue", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ch;
	params[1] = (intptr_t)&offset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::UnicodeCategory mscorlib::System::Globalization::CharUnicodeInfo::InternalGetUnicodeCategory(mscorlib::System::String* value, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetUnicodeCategory", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::UnicodeCategory ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::UnicodeCategory));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::UnicodeCategory>(*(mscorlib::System::Globalization::UnicodeCategory*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::UnicodeCategory mscorlib::System::Globalization::CharUnicodeInfo::InternalGetUnicodeCategory(mscorlib::System::String* str, int32_t index, int32_t& charLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetUnicodeCategory", std::vector<std::string> { "System.String", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&charLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::UnicodeCategory ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::UnicodeCategory));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::UnicodeCategory>(*(mscorlib::System::Globalization::UnicodeCategory*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Globalization::CharUnicodeInfo::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
