#include "System_Xml_DtdParser.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::DtdParser::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "DtdParser");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::DtdParser::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::DtdParser::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::IDtdParser* System_Xml::System::Xml::DtdParser::Create()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::IDtdParser*)returnValue;
}
void System_Xml::System::Xml::DtdParser::Initialize(System_Xml::System::Xml::IDtdParserAdapter* readerAdapter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "System.Xml.IDtdParserAdapter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)readerAdapter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::InitializeFreeFloatingDtd(mscorlib::System::String* baseUri, mscorlib::System::String* docTypeName, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* internalSubset, System_Xml::System::Xml::IDtdParserAdapter* adapter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitializeFreeFloatingDtd", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.String", "System.Xml.IDtdParserAdapter" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)baseUri;
	params[1] = (intptr_t)docTypeName;
	params[2] = (intptr_t)publicId;
	params[3] = (intptr_t)systemId;
	params[4] = (intptr_t)internalSubset;
	params[5] = (intptr_t)adapter;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::IDtdInfo* System_Xml::System::Xml::DtdParser::System_Xml_IDtdParser_ParseInternalDtd(System_Xml::System::Xml::IDtdParserAdapter* adapter, bool saveInternalSubset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Xml.IDtdParser.ParseInternalDtd", std::vector<std::string> { "System.Xml.IDtdParserAdapter", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)adapter;
	params[1] = (intptr_t)&saveInternalSubset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::IDtdInfo*)returnValue;
}
System_Xml::System::Xml::IDtdInfo* System_Xml::System::Xml::DtdParser::System_Xml_IDtdParser_ParseFreeFloatingDtd(mscorlib::System::String* baseUri, mscorlib::System::String* docTypeName, mscorlib::System::String* publicId, mscorlib::System::String* systemId, mscorlib::System::String* internalSubset, System_Xml::System::Xml::IDtdParserAdapter* adapter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Xml.IDtdParser.ParseFreeFloatingDtd", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.String", "System.Xml.IDtdParserAdapter" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)baseUri;
	params[1] = (intptr_t)docTypeName;
	params[2] = (intptr_t)publicId;
	params[3] = (intptr_t)systemId;
	params[4] = (intptr_t)internalSubset;
	params[5] = (intptr_t)adapter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::IDtdInfo*)returnValue;
}
bool System_Xml::System::Xml::DtdParser::get_ParsingInternalSubset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ParsingInternalSubset");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::DtdParser::get_IgnoreEntityReferences()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IgnoreEntityReferences");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::DtdParser::get_SaveInternalSubsetValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SaveInternalSubsetValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::DtdParser::get_ParsingTopLevelMarkup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ParsingTopLevelMarkup");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::DtdParser::get_SupportNamespaces()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportNamespaces");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::DtdParser::get_Normalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Normalize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::DtdParser::Parse(bool saveInternalSubset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&saveInternalSubset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseInDocumentDtd(bool saveInternalSubset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseInDocumentDtd", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&saveInternalSubset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseFreeFloatingDtd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseFreeFloatingDtd");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseInternalSubset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseInternalSubset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseExternalSubset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseExternalSubset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseSubset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseSubset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseAttlistDecl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseAttlistDecl");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseAttlistType(System_Xml::System::Xml::Schema::SchemaAttDef* attrDef, System_Xml::System::Xml::Schema::SchemaElementDecl* elementDecl, bool ignoreErrors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseAttlistType", std::vector<std::string> { "System.Xml.Schema.SchemaAttDef", "System.Xml.Schema.SchemaElementDecl", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)attrDef;
	params[1] = (intptr_t)elementDecl;
	params[2] = (intptr_t)&ignoreErrors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseAttlistDefault(System_Xml::System::Xml::Schema::SchemaAttDef* attrDef, bool ignoreErrors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseAttlistDefault", std::vector<std::string> { "System.Xml.Schema.SchemaAttDef", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attrDef;
	params[1] = (intptr_t)&ignoreErrors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseElementDecl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseElementDecl");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseElementOnlyContent(System_Xml::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseElementOnlyContent", std::vector<std::string> { "System.Xml.Schema.ParticleContentValidator", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pcv;
	params[1] = (intptr_t)&startParenEntityId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseHowMany(System_Xml::System::Xml::Schema::ParticleContentValidator* pcv)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseHowMany", std::vector<std::string> { "System.Xml.Schema.ParticleContentValidator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pcv;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseElementMixedContent(System_Xml::System::Xml::Schema::ParticleContentValidator* pcv, int32_t startParenEntityId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseElementMixedContent", std::vector<std::string> { "System.Xml.Schema.ParticleContentValidator", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pcv;
	params[1] = (intptr_t)&startParenEntityId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseEntityDecl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseEntityDecl");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseNotationDecl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseNotationDecl");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::AddUndeclaredNotation(mscorlib::System::String* notationName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddUndeclaredNotation", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)notationName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseComment()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseComment");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParsePI()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParsePI");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseCondSection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseCondSection");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ParseExternalId(System_Xml::System::Xml::DtdParser_Token idTokenType, System_Xml::System::Xml::DtdParser_Token declType, mscorlib::System::String& publicId, mscorlib::System::String& systemId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseExternalId", std::vector<std::string> { "System.Xml.DtdParser/Token", "System.Xml.DtdParser/Token", "System.String&", "System.String&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&idTokenType;
	params[1] = (intptr_t)&declType;
	params[2] = (intptr_t)&publicId;
	params[3] = (intptr_t)&systemId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::GetToken(bool needWhiteSpace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetToken", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&needWhiteSpace;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanSubsetContent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanSubsetContent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanNameExpected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanNameExpected");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanQNameExpected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanQNameExpected");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanNmtokenExpected()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanNmtokenExpected");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanDoctype1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanDoctype1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanDoctype2()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanDoctype2");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanClosingTag()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanClosingTag");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanElement1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanElement1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanElement2()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanElement2");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanElement3()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanElement3");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanElement4()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanElement4");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanElement5()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanElement5");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanElement6()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanElement6");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanElement7()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanElement7");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanAttlist1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanAttlist1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanAttlist2()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanAttlist2");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanAttlist3()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanAttlist3");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanAttlist4()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanAttlist4");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanAttlist5()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanAttlist5");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanAttlist6()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanAttlist6");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanAttlist7()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanAttlist7");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanLiteral(System_Xml::System::Xml::DtdParser_LiteralType literalType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanLiteral", std::vector<std::string> { "System.Xml.DtdParser/LiteralType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&literalType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::XmlQualifiedName* System_Xml::System::Xml::DtdParser::ScanEntityName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanEntityName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlQualifiedName*)returnValue;
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanNotation1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanNotation1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanSystemId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanSystemId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanEntity1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanEntity1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanEntity2()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanEntity2");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanEntity3()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanEntity3");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanPublicId1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanPublicId1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanPublicId2()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanPublicId2");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanCondSection1()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanCondSection1");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanCondSection2()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanCondSection2");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::DtdParser_Token System_Xml::System::Xml::DtdParser::ScanCondSection3()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanCondSection3");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::System::Xml::DtdParser_Token ret;
		std::memset(&ret, 0, sizeof(System_Xml::System::Xml::DtdParser_Token));
		return ret;
	}
	return static_cast<System_Xml::System::Xml::DtdParser_Token>(*(System_Xml::System::Xml::DtdParser_Token*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::DtdParser::ScanName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanName");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ScanQName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanQName");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ScanQName(bool isQName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanQName", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&isQName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::DtdParser::ReadDataInName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadDataInName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::DtdParser::ScanNmtoken()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanNmtoken");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::DtdParser::EatPublicKeyword()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EatPublicKeyword");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System_Xml::System::Xml::DtdParser::EatSystemKeyword()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EatSystemKeyword");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
System_Xml::System::Xml::XmlQualifiedName* System_Xml::System::Xml::DtdParser::GetNameQualified(bool canHavePrefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNameQualified", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&canHavePrefix;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::XmlQualifiedName*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::DtdParser::GetNameString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNameString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::DtdParser::GetNmtokenString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNmtokenString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::DtdParser::GetValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::DtdParser::GetValueWithStrippedSpaces()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValueWithStrippedSpaces");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t System_Xml::System::Xml::DtdParser::ReadData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadData");
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
void System_Xml::System::Xml::DtdParser::LoadParsingBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadParsingBuffer");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::SaveParsingBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveParsingBuffer");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::SaveParsingBuffer(int32_t internalSubsetValueEndPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SaveParsingBuffer", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&internalSubsetValueEndPos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::DtdParser::HandleEntityReference(bool paramEntity, bool inLiteral, bool inAttribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleEntityReference", std::vector<std::string> { "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&paramEntity;
	params[1] = (intptr_t)&inLiteral;
	params[2] = (intptr_t)&inAttribute;
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
bool System_Xml::System::Xml::DtdParser::HandleEntityReference(System_Xml::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool inLiteral, bool inAttribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleEntityReference", std::vector<std::string> { "System.Xml.XmlQualifiedName", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)entityName;
	params[1] = (intptr_t)&paramEntity;
	params[2] = (intptr_t)&inLiteral;
	params[3] = (intptr_t)&inAttribute;
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
bool System_Xml::System::Xml::DtdParser::HandleEntityEnd(bool inLiteral)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleEntityEnd", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&inLiteral;
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
System_Xml::System::Xml::Schema::SchemaEntity* System_Xml::System::Xml::DtdParser::VerifyEntityReference(System_Xml::System::Xml::XmlQualifiedName* entityName, bool paramEntity, bool mustBeDeclared, bool inAttribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerifyEntityReference", std::vector<std::string> { "System.Xml.XmlQualifiedName", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)entityName;
	params[1] = (intptr_t)&paramEntity;
	params[2] = (intptr_t)&mustBeDeclared;
	params[3] = (intptr_t)&inAttribute;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::System::Xml::Schema::SchemaEntity*)returnValue;
}
void System_Xml::System::Xml::DtdParser::SendValidationEvent(int32_t pos, System_Xml::System::Xml::Schema::XmlSeverityType severity, mscorlib::System::String* code, mscorlib::System::String* arg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Int32", "System.Xml.Schema.XmlSeverityType", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&pos;
	params[1] = (intptr_t)&severity;
	params[2] = (intptr_t)code;
	params[3] = (intptr_t)arg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSeverityType severity, mscorlib::System::String* code, mscorlib::System::String* arg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.XmlSeverityType", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&severity;
	params[1] = (intptr_t)code;
	params[2] = (intptr_t)arg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::SendValidationEvent(System_Xml::System::Xml::Schema::XmlSeverityType severity, System_Xml::System::Xml::Schema::XmlSchemaException* e)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendValidationEvent", std::vector<std::string> { "System.Xml.Schema.XmlSeverityType", "System.Xml.Schema.XmlSchemaException" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&severity;
	params[1] = (intptr_t)e;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::DtdParser::IsAttributeValueType(System_Xml::System::Xml::DtdParser_Token token)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAttributeValueType", std::vector<std::string> { "System.Xml.DtdParser/Token" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&token;
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
int32_t System_Xml::System::Xml::DtdParser::get_LineNo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LineNo");
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
int32_t System_Xml::System::Xml::DtdParser::get_LinePos()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LinePos");
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
mscorlib::System::String* System_Xml::System::Xml::DtdParser::get_BaseUriStr()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BaseUriStr");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::DtdParser::OnUnexpectedError()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnUnexpectedError");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::Throw(int32_t curPos, mscorlib::System::String* res)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Throw", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&curPos;
	params[1] = (intptr_t)res;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::Throw(int32_t curPos, mscorlib::System::String* res, mscorlib::System::String* arg)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Throw", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&curPos;
	params[1] = (intptr_t)res;
	params[2] = (intptr_t)arg;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::Throw(int32_t curPos, mscorlib::System::String* res, IL2CPP::Array<mscorlib::System::String*>* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Throw", std::vector<std::string> { "System.Int32", "System.String", "System.String[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&curPos;
	params[1] = (intptr_t)res;
	params[2] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::Throw(mscorlib::System::String* res, mscorlib::System::String* arg, int32_t lineNo, int32_t linePos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Throw", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)res;
	params[1] = (intptr_t)arg;
	params[2] = (intptr_t)&lineNo;
	params[3] = (intptr_t)&linePos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ThrowInvalidChar(int32_t pos, mscorlib::System::String* data, int32_t invCharPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowInvalidChar", std::vector<std::string> { "System.Int32", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pos;
	params[1] = (intptr_t)data;
	params[2] = (intptr_t)&invCharPos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ThrowInvalidChar(IL2CPP::Array<wchar_t>* data, int32_t length, int32_t invCharPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowInvalidChar", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&invCharPos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ThrowUnexpectedToken(int32_t pos, mscorlib::System::String* expectedToken)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowUnexpectedToken", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pos;
	params[1] = (intptr_t)expectedToken;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::DtdParser::ThrowUnexpectedToken(int32_t pos, mscorlib::System::String* expectedToken1, mscorlib::System::String* expectedToken2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowUnexpectedToken", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pos;
	params[1] = (intptr_t)expectedToken1;
	params[2] = (intptr_t)expectedToken2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System_Xml::System::Xml::DtdParser::ParseUnexpectedToken(int32_t startPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseUnexpectedToken", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&startPos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::DtdParser::StripSpaces(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StripSpaces", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
