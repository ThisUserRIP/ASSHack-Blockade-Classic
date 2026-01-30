#include "System_Xml_Schema_FacetsChecker_FacetsCompiler.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System_Xml::System::Xml::Schema::FacetsChecker::GetIl2CppClass(), "FacetsCompiler");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::_ctor(System_Xml::System::Xml::Schema::DatatypeImplementation* baseDatatype, System_Xml::System::Xml::Schema::RestrictionFacets* restriction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.Schema.DatatypeImplementation", "System.Xml.Schema.RestrictionFacets" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)baseDatatype;
	params[1] = (intptr_t)restriction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileLengthFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileLengthFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinLengthFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileMinLengthFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxLengthFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileMaxLengthFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompilePatternFacet(System_Xml::System::Xml::Schema::XmlSchemaPatternFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompilePatternFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaPatternFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileEnumerationFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, System_Xml::System::Xml::XmlNameTable* nameTable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileEnumerationFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet", "System.Xml.IXmlNamespaceResolver", "System.Xml.XmlNameTable" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)facet;
	params[1] = (intptr_t)nsmgr;
	params[2] = (intptr_t)nameTable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileWhitespaceFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileWhitespaceFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxInclusiveFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileMaxInclusiveFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMaxExclusiveFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileMaxExclusiveFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinInclusiveFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileMinInclusiveFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileMinExclusiveFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileMinExclusiveFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileTotalDigitsFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileTotalDigitsFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFractionDigitsFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileFractionDigitsFacet", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::FinishFacetCompile()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FinishFacetCompile");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckValue(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::XmlSchemaFacet* facet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckValue", std::vector<std::string> { "System.Object", "System.Xml.Schema.XmlSchemaFacet" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)facet;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CompileFacetCombinations()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompileFacetCombinations");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CopyFacetsFromBaseType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyFacetsFromBaseType");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::ParseFacetValue(System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype, System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, mscorlib::System::String* code, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, System_Xml::System::Xml::XmlNameTable* nameTable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseFacetValue", std::vector<std::string> { "System.Xml.Schema.XmlSchemaDatatype", "System.Xml.Schema.XmlSchemaFacet", "System.String", "System.Xml.IXmlNamespaceResolver", "System.Xml.XmlNameTable" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)datatype;
	params[1] = (intptr_t)facet;
	params[2] = (intptr_t)code;
	params[3] = (intptr_t)nsmgr;
	params[4] = (intptr_t)nameTable;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
mscorlib::System::String* System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::Preprocess(mscorlib::System::String* pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Preprocess", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pattern;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckProhibitedFlag(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, System_Xml::System::Xml::Schema::RestrictionFlags flag, mscorlib::System::String* errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckProhibitedFlag", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet", "System.Xml.Schema.RestrictionFlags", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)facet;
	params[1] = (intptr_t)&flag;
	params[2] = (intptr_t)errorCode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::CheckDupFlag(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, System_Xml::System::Xml::Schema::RestrictionFlags flag, mscorlib::System::String* errorCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckDupFlag", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet", "System.Xml.Schema.RestrictionFlags", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)facet;
	params[1] = (intptr_t)&flag;
	params[2] = (intptr_t)errorCode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, System_Xml::System::Xml::Schema::RestrictionFlags flag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFlag", std::vector<std::string> { "System.Xml.Schema.XmlSchemaFacet", "System.Xml.Schema.RestrictionFlags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)facet;
	params[1] = (intptr_t)&flag;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::SetFlag(System_Xml::System::Xml::Schema::RestrictionFlags flag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFlag", std::vector<std::string> { "System.Xml.Schema.RestrictionFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flag;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::Schema::FacetsChecker_FacetsCompiler::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
