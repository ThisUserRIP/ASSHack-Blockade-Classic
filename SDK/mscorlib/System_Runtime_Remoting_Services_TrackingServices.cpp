#include "System_Runtime_Remoting_Services_TrackingServices.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Remoting::Services::TrackingServices::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Remoting.Services", "TrackingServices");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Remoting::Services::TrackingServices::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Remoting::Services::TrackingServices::NotifyMarshaledObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Remoting::ObjRef* or_)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyMarshaledObject", std::vector<std::string> { "System.Object", "System.Runtime.Remoting.ObjRef" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)or_;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Services::TrackingServices::NotifyUnmarshaledObject(mscorlib::System::Object* obj, mscorlib::System::Runtime::Remoting::ObjRef* or_)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyUnmarshaledObject", std::vector<std::string> { "System.Object", "System.Runtime.Remoting.ObjRef" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)or_;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Services::TrackingServices::NotifyDisconnectedObject(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NotifyDisconnectedObject", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Remoting::Services::TrackingServices::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
