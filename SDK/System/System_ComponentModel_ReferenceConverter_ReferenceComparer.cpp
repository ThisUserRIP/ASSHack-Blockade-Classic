#include "System_ComponentModel_ReferenceConverter_ReferenceComparer.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::ReferenceConverter_ReferenceComparer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::ReferenceConverter::GetIl2CppClass(), "ReferenceComparer");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::ReferenceConverter_ReferenceComparer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::ReferenceConverter_ReferenceComparer::_ctor(System::ComponentModel::ReferenceConverter* converter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.ComponentModel.ReferenceConverter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)converter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t System::System::ComponentModel::ReferenceConverter_ReferenceComparer::Compare(mscorlib::System::Object* item1, mscorlib::System::Object* item2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "System.Object", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)item1;
	params[1] = (intptr_t)item2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
