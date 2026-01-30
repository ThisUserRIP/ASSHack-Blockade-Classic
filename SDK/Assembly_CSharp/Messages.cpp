#include "Messages.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Messages::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "Messages");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Messages::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Messages::OnGUI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnGUI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Messages::Add(mscorlib::System::String* text, float time, bool clear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "System.String", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&time;
	params[2] = (intptr_t)&clear;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::Messages::getTextBySec(int32_t sec)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "getTextBySec", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&sec;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::Messages::set_message(int32_t msgid, int32_t param)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_message", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&msgid;
	params[1] = (intptr_t)&param;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Messages::AddSysMsg(int32_t mID, int32_t param, float time, bool clear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSysMsg", std::vector<std::string> { "System.Int32", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&mID;
	params[1] = (intptr_t)&param;
	params[2] = (intptr_t)&time;
	params[3] = (intptr_t)&clear;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Messages::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
