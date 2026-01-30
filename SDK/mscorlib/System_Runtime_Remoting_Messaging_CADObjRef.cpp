#include "System_Runtime_Remoting_Messaging_CADObjRef.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Messaging::CADObjRef::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "CADObjRef");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Messaging::CADObjRef::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Messaging::CADObjRef::_ctor(mscorlib::System::Runtime::Remoting::ObjRef* o, int32_t sourceDomain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Remoting.ObjRef", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)o;
	params[1] = (intptr_t)&sourceDomain;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
