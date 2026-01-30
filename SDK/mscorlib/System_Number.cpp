#include "System_Number.h"

IL2CPP::Il2CppClass* mscorlib::System::Number::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "Number");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Number::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::Number::NumberBufferToDecimal(uint8_t* number, mscorlib::System::Decimal& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberBufferToDecimal", std::vector<std::string> { "System.Byte*", "System.Decimal&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)number;
	params[1] = (intptr_t)&value;
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
bool mscorlib::System::Number::NumberBufferToDouble(uint8_t* number, double& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberBufferToDouble", std::vector<std::string> { "System.Byte*", "System.Double&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)number;
	params[1] = (intptr_t)&value;
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
mscorlib::System::String* mscorlib::System::Number::FormatDecimal(mscorlib::System::Decimal value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatDecimal", std::vector<std::string> { "System.Decimal", "System.String", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Number::FormatDouble(double value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatDouble", std::vector<std::string> { "System.Double", "System.String", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Number::FormatInt32(int32_t value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatInt32", std::vector<std::string> { "System.Int32", "System.String", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Number::FormatUInt32(uint32_t value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatUInt32", std::vector<std::string> { "System.UInt32", "System.String", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Number::FormatInt64(int64_t value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatInt64", std::vector<std::string> { "System.Int64", "System.String", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Number::FormatUInt64(uint64_t value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatUInt64", std::vector<std::string> { "System.UInt64", "System.String", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Number::FormatSingle(float value, mscorlib::System::String* format, mscorlib::System::Globalization::NumberFormatInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FormatSingle", std::vector<std::string> { "System.Single", "System.String", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)format;
	params[2] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::Number::HexNumberToInt32(mscorlib::System::Number_NumberBuffer& number, int32_t& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HexNumberToInt32", std::vector<std::string> { "System.Number/NumberBuffer&", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&number;
	params[1] = (intptr_t)&value;
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
bool mscorlib::System::Number::HexNumberToInt64(mscorlib::System::Number_NumberBuffer& number, int64_t& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HexNumberToInt64", std::vector<std::string> { "System.Number/NumberBuffer&", "System.Int64&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&number;
	params[1] = (intptr_t)&value;
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
bool mscorlib::System::Number::HexNumberToUInt32(mscorlib::System::Number_NumberBuffer& number, uint32_t& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HexNumberToUInt32", std::vector<std::string> { "System.Number/NumberBuffer&", "System.UInt32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&number;
	params[1] = (intptr_t)&value;
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
bool mscorlib::System::Number::HexNumberToUInt64(mscorlib::System::Number_NumberBuffer& number, uint64_t& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HexNumberToUInt64", std::vector<std::string> { "System.Number/NumberBuffer&", "System.UInt64&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&number;
	params[1] = (intptr_t)&value;
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
bool mscorlib::System::Number::IsWhite(wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsWhite", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
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
bool mscorlib::System::Number::NumberToInt32(mscorlib::System::Number_NumberBuffer& number, int32_t& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberToInt32", std::vector<std::string> { "System.Number/NumberBuffer&", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&number;
	params[1] = (intptr_t)&value;
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
bool mscorlib::System::Number::NumberToInt64(mscorlib::System::Number_NumberBuffer& number, int64_t& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberToInt64", std::vector<std::string> { "System.Number/NumberBuffer&", "System.Int64&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&number;
	params[1] = (intptr_t)&value;
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
bool mscorlib::System::Number::NumberToUInt32(mscorlib::System::Number_NumberBuffer& number, uint32_t& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberToUInt32", std::vector<std::string> { "System.Number/NumberBuffer&", "System.UInt32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&number;
	params[1] = (intptr_t)&value;
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
bool mscorlib::System::Number::NumberToUInt64(mscorlib::System::Number_NumberBuffer& number, uint64_t& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NumberToUInt64", std::vector<std::string> { "System.Number/NumberBuffer&", "System.UInt64&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&number;
	params[1] = (intptr_t)&value;
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
wchar_t* mscorlib::System::Number::MatchChars(wchar_t* p, mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchChars", std::vector<std::string> { "System.Char*", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* mscorlib::System::Number::MatchChars(wchar_t* p, wchar_t* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchChars", std::vector<std::string> { "System.Char*", "System.Char*" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
mscorlib::System::Decimal mscorlib::System::Number::ParseDecimal(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseDecimal", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)numfmt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Decimal ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Decimal));
		return ret;
	}
	return static_cast<mscorlib::System::Decimal>(*(mscorlib::System::Decimal*)il2cpp_object_unbox(returnValue));
}
double mscorlib::System::Number::ParseDouble(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseDouble", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)numfmt;
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
int32_t mscorlib::System::Number::ParseInt32(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseInt32", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&style;
	params[2] = (intptr_t)info;
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
int64_t mscorlib::System::Number::ParseInt64(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseInt64", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)numfmt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Number::ParseNumber(wchar_t& str, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Number_NumberBuffer& number, mscorlib::System::Text::StringBuilder* sb, mscorlib::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseNumber", std::vector<std::string> { "System.Char*&", "System.Globalization.NumberStyles", "System.Number/NumberBuffer&", "System.Text.StringBuilder", "System.Globalization.NumberFormatInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&str;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)&number;
	params[3] = (intptr_t)sb;
	params[4] = (intptr_t)numfmt;
	params[5] = (intptr_t)&parseDecimal;
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
float mscorlib::System::Number::ParseSingle(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseSingle", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)numfmt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
uint32_t mscorlib::System::Number::ParseUInt32(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseUInt32", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)numfmt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint64_t mscorlib::System::Number::ParseUInt64(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseUInt64", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)numfmt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Number::StringToNumber(mscorlib::System::String* str, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Number_NumberBuffer& number, mscorlib::System::Globalization::NumberFormatInfo* info, bool parseDecimal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StringToNumber", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Number/NumberBuffer&", "System.Globalization.NumberFormatInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)&number;
	params[3] = (intptr_t)info;
	params[4] = (intptr_t)&parseDecimal;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Number::TrailingZeros(mscorlib::System::String* s, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TrailingZeros", std::vector<std::string> { "System.String", "System.Int32" });
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
bool mscorlib::System::Number::TryParseDecimal(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt, mscorlib::System::Decimal& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseDecimal", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo", "System.Decimal&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)numfmt;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::Number::TryParseDouble(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt, double& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseDouble", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo", "System.Double&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)numfmt;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::Number::TryParseInt32(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info, int32_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseInt32", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&style;
	params[2] = (intptr_t)info;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::Number::TryParseInt64(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info, int64_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseInt64", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo", "System.Int64&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&style;
	params[2] = (intptr_t)info;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::Number::TryParseSingle(mscorlib::System::String* value, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Globalization::NumberFormatInfo* numfmt, float& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseSingle", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo", "System.Single&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)numfmt;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::Number::TryParseUInt32(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info, uint32_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseUInt32", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo", "System.UInt32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&style;
	params[2] = (intptr_t)info;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::Number::TryParseUInt64(mscorlib::System::String* s, mscorlib::System::Globalization::NumberStyles style, mscorlib::System::Globalization::NumberFormatInfo* info, uint64_t& result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryParseUInt64", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Globalization.NumberFormatInfo", "System.UInt64&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&style;
	params[2] = (intptr_t)info;
	params[3] = (intptr_t)&result;
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
bool mscorlib::System::Number::TryStringToNumber(mscorlib::System::String* str, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Number_NumberBuffer& number, mscorlib::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryStringToNumber", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Number/NumberBuffer&", "System.Globalization.NumberFormatInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)&number;
	params[3] = (intptr_t)numfmt;
	params[4] = (intptr_t)&parseDecimal;
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
bool mscorlib::System::Number::TryStringToNumber(mscorlib::System::String* str, mscorlib::System::Globalization::NumberStyles options, mscorlib::System::Number_NumberBuffer& number, mscorlib::System::Text::StringBuilder* sb, mscorlib::System::Globalization::NumberFormatInfo* numfmt, bool parseDecimal)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryStringToNumber", std::vector<std::string> { "System.String", "System.Globalization.NumberStyles", "System.Number/NumberBuffer&", "System.Text.StringBuilder", "System.Globalization.NumberFormatInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&options;
	params[2] = (intptr_t)&number;
	params[3] = (intptr_t)sb;
	params[4] = (intptr_t)numfmt;
	params[5] = (intptr_t)&parseDecimal;
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
