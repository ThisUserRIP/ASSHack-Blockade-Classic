#include "System_IPv6AddressHelper.h"

IL2CPP::Il2CppClass* System::System::IPv6AddressHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System", "IPv6AddressHelper");
	return il2cppclass;
}
mscorlib::System::Type* System::System::IPv6AddressHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::System::IPv6AddressHelper::ParseCanonicalName(mscorlib::System::String* str, int32_t start, bool& isLoopback, mscorlib::System::String& scopeId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseCanonicalName", std::vector<std::string> { "System.String", "System.Int32", "System.Boolean&", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&isLoopback;
	params[3] = (intptr_t)&scopeId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::IPv6AddressHelper::CreateCanonicalName(uint16_t* numbers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateCanonicalName", std::vector<std::string> { "System.UInt16*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)numbers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Int32, mscorlib::System::Int32> System::System::IPv6AddressHelper::FindCompressionRange(uint16_t* numbers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindCompressionRange", std::vector<std::string> { "System.UInt16*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)numbers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Int32, mscorlib::System::Int32> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Int32, mscorlib::System::Int32>));
		return ret;
	}
	return static_cast<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Int32, mscorlib::System::Int32>>(*(mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Int32, mscorlib::System::Int32>*)il2cpp_object_unbox(returnValue));
}
bool System::System::IPv6AddressHelper::ShouldHaveIpv4Embedded(uint16_t* numbers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShouldHaveIpv4Embedded", std::vector<std::string> { "System.UInt16*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)numbers;
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
bool System::System::IPv6AddressHelper::InternalIsValid(wchar_t* name, int32_t start, int32_t& end, bool validateStrictAddress)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalIsValid", std::vector<std::string> { "System.Char*", "System.Int32", "System.Int32&", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&validateStrictAddress;
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
bool System::System::IPv6AddressHelper::IsValid(wchar_t* name, int32_t start, int32_t& end)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid", std::vector<std::string> { "System.Char*", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
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
bool System::System::IPv6AddressHelper::IsValidStrict(wchar_t* name, int32_t start, int32_t& end)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValidStrict", std::vector<std::string> { "System.Char*", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
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
bool System::System::IPv6AddressHelper::Parse(mscorlib::System::String* address, uint16_t* numbers, int32_t start, mscorlib::System::String& scopeId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String", "System.UInt16*", "System.Int32", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)address;
	params[1] = (intptr_t)numbers;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&scopeId;
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
