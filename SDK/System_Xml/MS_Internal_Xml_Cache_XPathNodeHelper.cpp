#include "MS_Internal_Xml_Cache_XPathNodeHelper.h"

IL2CPP::Il2CppClass* System_Xml::MS::Internal::Xml::Cache::XPathNodeHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "MS.Internal.Xml.Cache", "XPathNodeHelper");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::MS::Internal::Xml::Cache::XPathNodeHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t System_Xml::MS::Internal::Xml::Cache::XPathNodeHelper::GetLocalNamespaces(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageElem, int32_t idxElem, IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNmsp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalNamespaces", std::vector<std::string> { "MS.Internal.Xml.Cache.XPathNode[]", "System.Int32", "MS.Internal.Xml.Cache.XPathNode[]&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pageElem;
	params[1] = (intptr_t)&idxElem;
	params[2] = (intptr_t)&pageNmsp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t System_Xml::MS::Internal::Xml::Cache::XPathNodeHelper::GetInScopeNamespaces(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageElem, int32_t idxElem, IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNmsp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInScopeNamespaces", std::vector<std::string> { "MS.Internal.Xml.Cache.XPathNode[]", "System.Int32", "MS.Internal.Xml.Cache.XPathNode[]&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pageElem;
	params[1] = (intptr_t)&idxElem;
	params[2] = (intptr_t)&pageNmsp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool System_Xml::MS::Internal::Xml::Cache::XPathNodeHelper::GetParent(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNode, int32_t& idxNode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetParent", std::vector<std::string> { "MS.Internal.Xml.Cache.XPathNode[]&", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pageNode;
	params[1] = (intptr_t)&idxNode;
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
int32_t System_Xml::MS::Internal::Xml::Cache::XPathNodeHelper::GetLocation(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageNode, int32_t idxNode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocation", std::vector<std::string> { "MS.Internal.Xml.Cache.XPathNode[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pageNode;
	params[1] = (intptr_t)&idxNode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool System_Xml::MS::Internal::Xml::Cache::XPathNodeHelper::GetTextFollowing(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageCurrent, int32_t& idxCurrent, IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageEnd, int32_t idxEnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTextFollowing", std::vector<std::string> { "MS.Internal.Xml.Cache.XPathNode[]&", "System.Int32&", "MS.Internal.Xml.Cache.XPathNode[]", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&pageCurrent;
	params[1] = (intptr_t)&idxCurrent;
	params[2] = (intptr_t)pageEnd;
	params[3] = (intptr_t)&idxEnd;
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
bool System_Xml::MS::Internal::Xml::Cache::XPathNodeHelper::GetNonDescendant(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNode, int32_t& idxNode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNonDescendant", std::vector<std::string> { "MS.Internal.Xml.Cache.XPathNode[]&", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pageNode;
	params[1] = (intptr_t)&idxNode;
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
