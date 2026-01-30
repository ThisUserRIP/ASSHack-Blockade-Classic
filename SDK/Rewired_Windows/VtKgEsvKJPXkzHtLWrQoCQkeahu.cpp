#include "VtKgEsvKJPXkzHtLWrQoCQkeahu.h"

IL2CPP::Il2CppClass* Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "", "VtKgEsvKJPXkzHtLWrQoCQkeahu");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Windows::UFszbrouPHhjAZsfhrYqirKsuPI* Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::get_Device()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Device");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Windows::UFszbrouPHhjAZsfhrYqirKsuPI*)returnValue;
}
void Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::set_Device(Rewired_Windows::UFszbrouPHhjAZsfhrYqirKsuPI* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Device", std::vector<std::string> { "UFszbrouPHhjAZsfhrYqirKsuPI" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::get_ObjectCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ObjectCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::set_ObjectCode(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ObjectCode", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::get_PropertyType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PropertyType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf ret;
		std::memset(&ret, 0, sizeof(Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf));
		return ret;
	}
	return static_cast<Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf>(*(Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf*)il2cpp_object_unbox(returnValue));
}
void Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::set_PropertyType(Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_PropertyType", std::vector<std::string> { "bSWUbMLvBMVgnJBMqjyeDQzgJpxf" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::_ctor(Rewired_Windows::UFszbrouPHhjAZsfhrYqirKsuPI* device, int32_t code, Rewired_Windows::bSWUbMLvBMVgnJBMqjyeDQzgJpxf propertyType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UFszbrouPHhjAZsfhrYqirKsuPI", "System.Int32", "bSWUbMLvBMVgnJBMqjyeDQzgJpxf" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)device;
	params[1] = (intptr_t)&code;
	params[2] = (intptr_t)&propertyType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::TagApgncObAEBJPTVLwLFQnFOKNq(intptr_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TagApgncObAEBJPTVLwLFQnFOKNq");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::TagApgncObAEBJPTVLwLFQnFOKNq(intptr_t A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TagApgncObAEBJPTVLwLFQnFOKNq");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::hgXtredSOOVOTeNlnIHfmvvnEFlF(intptr_t A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hgXtredSOOVOTeNlnIHfmvvnEFlF");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::XDTnJjfiujEMCgHyFnDInOApfzWk(intptr_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "XDTnJjfiujEMCgHyFnDInOApfzWk");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::QPGbBSAGDsqHQYrOzHJpEuGJCFh(intptr_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QPGbBSAGDsqHQYrOzHJpEuGJCFh");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::QPGbBSAGDsqHQYrOzHJpEuGJCFh(intptr_t A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QPGbBSAGDsqHQYrOzHJpEuGJCFh");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Windows::VtKgEsvKJPXkzHtLWrQoCQkeahu::hgXtredSOOVOTeNlnIHfmvvnEFlF(intptr_t A_1, Rewired_Windows::RSLeRDdyBKjDLeXomHVbvfpuXSu A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hgXtredSOOVOTeNlnIHfmvvnEFlF");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
