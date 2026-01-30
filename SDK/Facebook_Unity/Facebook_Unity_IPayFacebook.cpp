#include "Facebook_Unity_IPayFacebook.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::IPayFacebook::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "IPayFacebook");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::IPayFacebook::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::IPayFacebook::Pay(mscorlib::System::String* product, mscorlib::System::String* action, int32_t quantity, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMin, mscorlib::System::Nullable_1<mscorlib::System::Int32> quantityMax, mscorlib::System::String* requestId, mscorlib::System::String* pricepointId, mscorlib::System::String* testCurrency, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pay", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Nullable`1<System.Int32>", "System.Nullable`1<System.Int32>", "System.String", "System.String", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)product;
	params[1] = (intptr_t)action;
	params[2] = (intptr_t)&quantity;
	params[3] = (intptr_t)&quantityMin;
	params[4] = (intptr_t)&quantityMax;
	params[5] = (intptr_t)requestId;
	params[6] = (intptr_t)pricepointId;
	params[7] = (intptr_t)testCurrency;
	params[8] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
