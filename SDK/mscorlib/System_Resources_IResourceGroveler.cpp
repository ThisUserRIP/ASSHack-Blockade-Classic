#include "System_Resources_IResourceGroveler.h"

IL2CPP::Il2CppClass* mscorlib::System::Resources::IResourceGroveler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Resources", "IResourceGroveler");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Resources::IResourceGroveler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Resources::ResourceSet* mscorlib::System::Resources::IResourceGroveler::GrovelForResourceSet(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceSet>* localResourceSets, bool tryParents, bool createIfNotExists, mscorlib::System::Threading::StackCrawlMark& stackMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GrovelForResourceSet", std::vector<std::string> { "System.Globalization.CultureInfo", "System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>", "System.Boolean", "System.Boolean", "System.Threading.StackCrawlMark&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)culture;
	params[1] = (intptr_t)localResourceSets;
	params[2] = (intptr_t)&tryParents;
	params[3] = (intptr_t)&createIfNotExists;
	params[4] = (intptr_t)&stackMark;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Resources::ResourceSet*)returnValue;
}
