#include "PopUpMessage.h"

IL2CPP::Il2CppClass* Assembly_CSharp::PopUpMessage::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "PopUpMessage");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::PopUpMessage::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::PopUpMessage::_ctor(Assembly_CSharp::POPUP _msgID, mscorlib::System::String* _bt, int32_t _param1, int32_t _param2, int32_t _param3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "POPUP", "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&_msgID;
	params[1] = (intptr_t)_bt;
	params[2] = (intptr_t)&_param1;
	params[3] = (intptr_t)&_param2;
	params[4] = (intptr_t)&_param3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
