#include "BlAhOdhIxtghgVnBwWDDcexMfPlE_cODFWZBuDfnbEFkIOruDgeNBZWuT.h"

IL2CPP::Il2CppClass* Rewired_Windows::BlAhOdhIxtghgVnBwWDDcexMfPlE_cODFWZBuDfnbEFkIOruDgeNBZWuT::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Windows::BlAhOdhIxtghgVnBwWDDcexMfPlE::GetIl2CppClass(), "cODFWZBuDfnbEFkIOruDgeNBZWuT");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::BlAhOdhIxtghgVnBwWDDcexMfPlE_cODFWZBuDfnbEFkIOruDgeNBZWuT::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::BlAhOdhIxtghgVnBwWDDcexMfPlE_cODFWZBuDfnbEFkIOruDgeNBZWuT::_ctor(mscorlib::System::Object* object, intptr_t method)
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
void Rewired_Windows::BlAhOdhIxtghgVnBwWDDcexMfPlE_cODFWZBuDfnbEFkIOruDgeNBZWuT::Invoke(int32_t dwErrorCode, int32_t dwNumbmerOfBytesTransfered, intptr_t lpOverlapped)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.Int32", "System.Int32", "System.IntPtr" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&dwErrorCode;
	params[1] = (intptr_t)&dwNumbmerOfBytesTransfered;
	params[2] = (intptr_t)&lpOverlapped;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::IAsyncResult* Rewired_Windows::BlAhOdhIxtghgVnBwWDDcexMfPlE_cODFWZBuDfnbEFkIOruDgeNBZWuT::BeginInvoke(int32_t dwErrorCode, int32_t dwNumbmerOfBytesTransfered, intptr_t lpOverlapped, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "System.Int32", "System.Int32", "System.IntPtr", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&dwErrorCode;
	params[1] = (intptr_t)&dwNumbmerOfBytesTransfered;
	params[2] = (intptr_t)&lpOverlapped;
	params[3] = (intptr_t)callback;
	params[4] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
void Rewired_Windows::BlAhOdhIxtghgVnBwWDDcexMfPlE_cODFWZBuDfnbEFkIOruDgeNBZWuT::EndInvoke(mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)result;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
