#include "System_Resources_ManifestBasedResourceGroveler.h"

IL2CPP::Il2CppClass* mscorlib::System::Resources::ManifestBasedResourceGroveler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Resources", "ManifestBasedResourceGroveler");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Resources::ManifestBasedResourceGroveler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Resources::ManifestBasedResourceGroveler::_ctor(mscorlib::System::Resources::ResourceManager_ResourceManagerMediator* mediator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Resources.ResourceManager/ResourceManagerMediator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mediator;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Resources::ResourceSet* mscorlib::System::Resources::ManifestBasedResourceGroveler::GrovelForResourceSet(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceSet>* localResourceSets, bool tryParents, bool createIfNotExists, mscorlib::System::Threading::StackCrawlMark& stackMark)
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
mscorlib::System::Globalization::CultureInfo* mscorlib::System::Resources::ManifestBasedResourceGroveler::UltimateFallbackFixup(mscorlib::System::Globalization::CultureInfo* lookForCulture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UltimateFallbackFixup", std::vector<std::string> { "System.Globalization.CultureInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)lookForCulture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::CultureInfo*)returnValue;
}
mscorlib::System::Globalization::CultureInfo* mscorlib::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguage(mscorlib::System::Reflection::Assembly* a, mscorlib::System::Resources::UltimateResourceFallbackLocation& fallbackLocation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNeutralResourcesLanguage", std::vector<std::string> { "System.Reflection.Assembly", "System.Resources.UltimateResourceFallbackLocation&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)a;
	params[1] = (intptr_t)&fallbackLocation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::CultureInfo*)returnValue;
}
mscorlib::System::Resources::ResourceSet* mscorlib::System::Resources::ManifestBasedResourceGroveler::CreateResourceSet(mscorlib::System::IO::Stream* store, mscorlib::System::Reflection::Assembly* assembly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateResourceSet", std::vector<std::string> { "System.IO.Stream", "System.Reflection.Assembly" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)store;
	params[1] = (intptr_t)assembly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Resources::ResourceSet*)returnValue;
}
mscorlib::System::IO::Stream* mscorlib::System::Resources::ManifestBasedResourceGroveler::GetManifestResourceStream(mscorlib::System::Reflection::RuntimeAssembly* satellite, mscorlib::System::String* fileName, mscorlib::System::Threading::StackCrawlMark& stackMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetManifestResourceStream", std::vector<std::string> { "System.Reflection.RuntimeAssembly", "System.String", "System.Threading.StackCrawlMark&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)satellite;
	params[1] = (intptr_t)fileName;
	params[2] = (intptr_t)&stackMark;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::Stream*)returnValue;
}
mscorlib::System::IO::Stream* mscorlib::System::Resources::ManifestBasedResourceGroveler::CaseInsensitiveManifestResourceStreamLookup(mscorlib::System::Reflection::RuntimeAssembly* satellite, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CaseInsensitiveManifestResourceStreamLookup", std::vector<std::string> { "System.Reflection.RuntimeAssembly", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)satellite;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IO::Stream*)returnValue;
}
mscorlib::System::Reflection::RuntimeAssembly* mscorlib::System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo* lookForCulture, mscorlib::System::Threading::StackCrawlMark& stackMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSatelliteAssembly", std::vector<std::string> { "System.Globalization.CultureInfo", "System.Threading.StackCrawlMark&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)lookForCulture;
	params[1] = (intptr_t)&stackMark;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::RuntimeAssembly*)returnValue;
}
bool mscorlib::System::Resources::ManifestBasedResourceGroveler::CanUseDefaultResourceClasses(mscorlib::System::String* readerTypeName, mscorlib::System::String* resSetTypeName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanUseDefaultResourceClasses", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)readerTypeName;
	params[1] = (intptr_t)resSetTypeName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::Resources::ManifestBasedResourceGroveler::GetSatelliteAssemblyName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSatelliteAssemblyName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Resources::ManifestBasedResourceGroveler::HandleSatelliteMissing()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleSatelliteMissing");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Resources::ManifestBasedResourceGroveler::HandleResourceStreamMissing(mscorlib::System::String* fileName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleResourceStreamMissing", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fileName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Resources::ManifestBasedResourceGroveler::GetNeutralResourcesLanguageAttribute(mscorlib::System::Reflection::Assembly* assembly, mscorlib::System::String& cultureName, int16_t& fallbackLocation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNeutralResourcesLanguageAttribute", std::vector<std::string> { "System.Reflection.Assembly", "System.String&", "System.Int16&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)assembly;
	params[1] = (intptr_t)&cultureName;
	params[2] = (intptr_t)&fallbackLocation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
