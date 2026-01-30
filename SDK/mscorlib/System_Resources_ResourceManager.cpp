#include "System_Resources_ResourceManager.h"

IL2CPP::Il2CppClass* mscorlib::System::Resources::ResourceManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Resources", "ResourceManager");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Resources::ResourceManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Resources::ResourceManager::Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Resources::ResourceManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Resources::ResourceManager::_ctor(mscorlib::System::String* baseName, mscorlib::System::Reflection::Assembly* assembly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Reflection.Assembly" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)baseName;
	params[1] = (intptr_t)assembly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Resources::ResourceManager::_ctor(mscorlib::System::Type* resourceSource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)resourceSource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Resources::ResourceManager::OnDeserializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDeserializing", std::vector<std::string> { "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ctx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Resources::ResourceManager::OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDeserialized", std::vector<std::string> { "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ctx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Resources::ResourceManager::OnSerializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSerializing", std::vector<std::string> { "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ctx;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Resources::ResourceManager::CommonAssemblyInit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CommonAssemblyInit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Resources::ResourceManager::get_BaseName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BaseName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::Resources::ResourceManager::get_IgnoreCase()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IgnoreCase");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Resources::UltimateResourceFallbackLocation mscorlib::System::Resources::ResourceManager::get_FallbackLocation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FallbackLocation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Resources::UltimateResourceFallbackLocation ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Resources::UltimateResourceFallbackLocation));
		return ret;
	}
	return static_cast<mscorlib::System::Resources::UltimateResourceFallbackLocation>(*(mscorlib::System::Resources::UltimateResourceFallbackLocation*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::Resources::ResourceManager::GetResourceFileName(mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResourceFileName", std::vector<std::string> { "System.Globalization.CultureInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Resources::ResourceSet* mscorlib::System::Resources::ResourceManager::GetFirstResourceSet(mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstResourceSet", std::vector<std::string> { "System.Globalization.CultureInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Resources::ResourceSet*)returnValue;
}
mscorlib::System::Resources::ResourceSet* mscorlib::System::Resources::ResourceManager::GetResourceSet(mscorlib::System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetResourceSet", std::vector<std::string> { "System.Globalization.CultureInfo", "System.Boolean", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)culture;
	params[1] = (intptr_t)&createIfNotExists;
	params[2] = (intptr_t)&tryParents;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Resources::ResourceSet*)returnValue;
}
mscorlib::System::Resources::ResourceSet* mscorlib::System::Resources::ResourceManager::InternalGetResourceSet(mscorlib::System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetResourceSet", std::vector<std::string> { "System.Globalization.CultureInfo", "System.Boolean", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)culture;
	params[1] = (intptr_t)&createIfNotExists;
	params[2] = (intptr_t)&tryParents;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Resources::ResourceSet*)returnValue;
}
mscorlib::System::Resources::ResourceSet* mscorlib::System::Resources::ResourceManager::InternalGetResourceSet(mscorlib::System::Globalization::CultureInfo* requestedCulture, bool createIfNotExists, bool tryParents, mscorlib::System::Threading::StackCrawlMark& stackMark)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetResourceSet", std::vector<std::string> { "System.Globalization.CultureInfo", "System.Boolean", "System.Boolean", "System.Threading.StackCrawlMark&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)requestedCulture;
	params[1] = (intptr_t)&createIfNotExists;
	params[2] = (intptr_t)&tryParents;
	params[3] = (intptr_t)&stackMark;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Resources::ResourceSet*)returnValue;
}
void mscorlib::System::Resources::ResourceManager::AddResourceSet(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Resources::ResourceSet>* localResourceSets, mscorlib::System::String* cultureName, mscorlib::System::Resources::ResourceSet& rs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddResourceSet", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>", "System.String", "System.Resources.ResourceSet&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)localResourceSets;
	params[1] = (intptr_t)cultureName;
	params[2] = (intptr_t)&rs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Version* mscorlib::System::Resources::ResourceManager::GetSatelliteContractVersion(mscorlib::System::Reflection::Assembly* a)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSatelliteContractVersion", std::vector<std::string> { "System.Reflection.Assembly" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)a;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Version*)returnValue;
}
mscorlib::System::Globalization::CultureInfo* mscorlib::System::Resources::ResourceManager::GetNeutralResourcesLanguage(mscorlib::System::Reflection::Assembly* a)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNeutralResourcesLanguage", std::vector<std::string> { "System.Reflection.Assembly" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)a;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::CultureInfo*)returnValue;
}
bool mscorlib::System::Resources::ResourceManager::CompareNames(mscorlib::System::String* asmTypeName1, mscorlib::System::String* typeName2, mscorlib::System::Reflection::AssemblyName* asmName2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareNames", std::vector<std::string> { "System.String", "System.String", "System.Reflection.AssemblyName" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)asmTypeName1;
	params[1] = (intptr_t)typeName2;
	params[2] = (intptr_t)asmName2;
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
void mscorlib::System::Resources::ResourceManager::SetAppXConfiguration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAppXConfiguration");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Resources::ResourceManager::GetString(mscorlib::System::String* name, mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetString", std::vector<std::string> { "System.String", "System.Globalization.CultureInfo" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Resources::ResourceManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
