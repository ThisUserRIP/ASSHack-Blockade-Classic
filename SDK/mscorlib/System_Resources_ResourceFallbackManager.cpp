#include "System_Resources_ResourceFallbackManager.h"

IL2CPP::Il2CppClass* mscorlib::System::Resources::ResourceFallbackManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Resources", "ResourceFallbackManager");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Resources::ResourceFallbackManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Resources::ResourceFallbackManager::_ctor(mscorlib::System::Globalization::CultureInfo* startingCulture, mscorlib::System::Globalization::CultureInfo* neutralResourcesCulture, bool useParents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Globalization.CultureInfo", "System.Globalization.CultureInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)startingCulture;
	params[1] = (intptr_t)neutralResourcesCulture;
	params[2] = (intptr_t)&useParents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::IEnumerator* mscorlib::System::Resources::ResourceFallbackManager::System_Collections_IEnumerable_GetEnumerator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IEnumerable.GetEnumerator");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerator*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Globalization::CultureInfo>* mscorlib::System::Resources::ResourceFallbackManager::GetEnumerator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEnumerator");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Globalization::CultureInfo>*)returnValue;
}
