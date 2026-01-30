#include "ggDVQTTQHAETzCUHHTNpTBizSCG_BbiIDUKcVdlIGMgdMdPBmLsSaxAr.h"

IL2CPP::Il2CppClass* Rewired_Windows::ggDVQTTQHAETzCUHHTNpTBizSCG_BbiIDUKcVdlIGMgdMdPBmLsSaxAr::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Windows::ggDVQTTQHAETzCUHHTNpTBizSCG::GetIl2CppClass(), "BbiIDUKcVdlIGMgdMdPBmLsSaxAr");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::ggDVQTTQHAETzCUHHTNpTBizSCG_BbiIDUKcVdlIGMgdMdPBmLsSaxAr::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::ggDVQTTQHAETzCUHHTNpTBizSCG_BbiIDUKcVdlIGMgdMdPBmLsSaxAr::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t Rewired_Windows::ggDVQTTQHAETzCUHHTNpTBizSCG_BbiIDUKcVdlIGMgdMdPBmLsSaxAr::Invoke(intptr_t hWnd, uint32_t msg, intptr_t wParam, intptr_t lParam)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.IntPtr", "System.UInt32", "System.IntPtr", "System.IntPtr" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&hWnd;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)&wParam;
	params[3] = (intptr_t)&lParam;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::IAsyncResult* Rewired_Windows::ggDVQTTQHAETzCUHHTNpTBizSCG_BbiIDUKcVdlIGMgdMdPBmLsSaxAr::BeginInvoke(intptr_t hWnd, uint32_t msg, intptr_t wParam, intptr_t lParam, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "System.IntPtr", "System.UInt32", "System.IntPtr", "System.IntPtr", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&hWnd;
	params[1] = (intptr_t)&msg;
	params[2] = (intptr_t)&wParam;
	params[3] = (intptr_t)&lParam;
	params[4] = (intptr_t)callback;
	params[5] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
intptr_t Rewired_Windows::ggDVQTTQHAETzCUHHTNpTBizSCG_BbiIDUKcVdlIGMgdMdPBmLsSaxAr::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
