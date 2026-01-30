#include "Messages_CMsg.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Messages_CMsg::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Messages::GetIl2CppClass(), "CMsg");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Messages_CMsg::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Messages_CMsg::_ctor(mscorlib::System::String* _text, float _time)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)_text;
	params[1] = (intptr_t)&_time;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Messages_CMsg::_ctor(mscorlib::System::String* _text, float _time, float _duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)_text;
	params[1] = (intptr_t)&_time;
	params[2] = (intptr_t)&_duration;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Messages_CMsg::_ctor(int32_t _msgID, int32_t _param, float _time)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&_msgID;
	params[1] = (intptr_t)&_param;
	params[2] = (intptr_t)&_time;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Messages_CMsg::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
