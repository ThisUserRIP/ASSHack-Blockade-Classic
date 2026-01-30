#include "System_Runtime_Serialization_Formatters_Binary_IOUtil.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::IOUtil::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "IOUtil");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::IOUtil::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::Runtime::Serialization::Formatters::Binary::IOUtil::FlagTest(mscorlib::System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, mscorlib::System::Runtime::Serialization::Formatters::Binary::MessageEnum target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlagTest", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.MessageEnum", "System.Runtime.Serialization.Formatters.Binary.MessageEnum" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&flag;
	params[1] = (intptr_t)&target;
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
void mscorlib::System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteStringWithCode(mscorlib::System::String* value, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStringWithCode", std::vector<std::string> { "System.String", "System.Runtime.Serialization.Formatters.Binary.__BinaryWriter" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)sout;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::IOUtil::WriteWithCode(mscorlib::System::Type* type, mscorlib::System::Object* value, mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteWithCode", std::vector<std::string> { "System.Type", "System.Object", "System.Runtime.Serialization.Formatters.Binary.__BinaryWriter" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)value;
	params[2] = (intptr_t)sout;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
