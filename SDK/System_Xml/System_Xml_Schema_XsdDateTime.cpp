#include "System_Xml_Schema_XsdDateTime.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::XsdDateTime::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml.Schema", "XsdDateTime");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::XsdDateTime::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::XsdDateTime::_ctor(mscorlib::System::String* text, System_Xml::System::Xml::Schema::XsdDateTimeFlags kinds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Xml.Schema.XsdDateTimeFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&kinds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdDateTime::_ctor(System_Xml::System::Xml::Schema::XsdDateTime_Parser parser)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.XsdDateTime/Parser" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&parser;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdDateTime::InitiateXsdDateTime(System_Xml::System::Xml::Schema::XsdDateTime_Parser parser)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitiateXsdDateTime", std::vector<std::string> { "System.Xml.Schema.XsdDateTime/Parser" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&parser;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::Schema::XsdDateTime::TryParse(mscorlib::System::String* text, System_Xml::System::Xml::Schema::XsdDateTimeFlags kinds, System_Xml::System::Xml::Schema::XsdDateTime& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParse", std::vector<std::string> { "System.String", "System.Xml.Schema.XsdDateTimeFlags", "System.Xml.Schema.XsdDateTime&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&kinds;
	params[2] = (intptr_t)&result;
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
void System_Xml::System::Xml::Schema::XsdDateTime::_ctor(mscorlib::System::DateTime dateTime, System_Xml::System::Xml::Schema::XsdDateTimeFlags kinds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.DateTime", "System.Xml.Schema.XsdDateTimeFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dateTime;
	params[1] = (intptr_t)&kinds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdDateTime::_ctor(mscorlib::System::DateTimeOffset dateTimeOffset, System_Xml::System::Xml::Schema::XsdDateTimeFlags kinds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.DateTimeOffset", "System.Xml.Schema.XsdDateTimeFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dateTimeOffset;
	params[1] = (intptr_t)&kinds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::Schema::XsdDateTime_DateTimeTypeCode System_Xml::System::Xml::Schema::XsdDateTime::get_InternalTypeCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InternalTypeCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XsdDateTime_DateTimeTypeCode ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XsdDateTime_DateTimeTypeCode));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XsdDateTime_DateTimeTypeCode>(*(System_Xml::System::Xml::Schema::XsdDateTime_DateTimeTypeCode*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::Schema::XsdDateTime_XsdDateTimeKind System_Xml::System::Xml::Schema::XsdDateTime::get_InternalKind()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InternalKind");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::Schema::XsdDateTime_XsdDateTimeKind ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::Schema::XsdDateTime_XsdDateTimeKind));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::Schema::XsdDateTime_XsdDateTimeKind>(*(System_Xml::System::Xml::Schema::XsdDateTime_XsdDateTimeKind*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Schema::XsdDateTime::get_Year()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Year");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Schema::XsdDateTime::get_Month()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Month");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Schema::XsdDateTime::get_Day()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Day");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Schema::XsdDateTime::get_Hour()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Hour");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Schema::XsdDateTime::get_Minute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Minute");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Schema::XsdDateTime::get_Second()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Second");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Schema::XsdDateTime::get_Fraction()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Fraction");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Schema::XsdDateTime::get_ZoneHour()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ZoneHour");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t System_Xml::System::Xml::Schema::XsdDateTime::get_ZoneMinute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ZoneMinute");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::DateTime System_Xml::System::Xml::Schema::XsdDateTime::op_Implicit(System_Xml::System::Xml::Schema::XsdDateTime xdt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.Xml.Schema.XsdDateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&xdt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::DateTimeOffset System_Xml::System::Xml::Schema::XsdDateTime::op_Implicit(System_Xml::System::Xml::Schema::XsdDateTime xdt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.Xml.Schema.XsdDateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&xdt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTimeOffset ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTimeOffset));
		return ret;
	}
	return static_cast<mscorlib::System::DateTimeOffset>(*(mscorlib::System::DateTimeOffset*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* System_Xml::System::Xml::Schema::XsdDateTime::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::XsdDateTime::PrintDate(mscorlib::System::Text::StringBuilder* sb)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrintDate", std::vector<std::string> { "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sb;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdDateTime::PrintTime(mscorlib::System::Text::StringBuilder* sb)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrintTime", std::vector<std::string> { "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sb;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdDateTime::PrintZone(mscorlib::System::Text::StringBuilder* sb)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrintZone", std::vector<std::string> { "System.Text.StringBuilder" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sb;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdDateTime::IntToCharArray(IL2CPP::Array<wchar_t>* text, int32_t start, int32_t value, int32_t digits)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IntToCharArray", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&value;
	params[3] = (intptr_t)&digits;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdDateTime::ShortToCharArray(IL2CPP::Array<wchar_t>* text, int32_t start, int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShortToCharArray", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::XsdDateTime::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
