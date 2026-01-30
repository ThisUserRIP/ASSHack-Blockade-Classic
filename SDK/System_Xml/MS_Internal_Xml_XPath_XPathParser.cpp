#include "MS_Internal_Xml_XPath_XPathParser.h"

IL2CPP::Il2CppClass* System_Xml::MS::Internal::Xml::XPath::XPathParser::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "MS.Internal.Xml.XPath", "XPathParser");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::MS::Internal::Xml::XPath::XPathParser::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::MS::Internal::Xml::XPath::XPathParser::_ctor(System_Xml::MS::Internal::Xml::XPath::XPathScanner* scanner)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "MS.Internal.Xml.XPath.XPathScanner" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)scanner;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseXPathExpresion(mscorlib::System::String* xpathExpresion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseXPathExpresion", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xpathExpresion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseExpresion(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseExpresion", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseOrExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseOrExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseAndExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseAndExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseEqualityExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseEqualityExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseRelationalExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseRelationalExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseAdditiveExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseAdditiveExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseMultiplicativeExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseMultiplicativeExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseUnaryExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseUnaryExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseUnionExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseUnionExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
bool System_Xml::MS::Internal::Xml::XPath::XPathParser::IsNodeType(System_Xml::MS::Internal::Xml::XPath::XPathScanner* scaner)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsNodeType", std::vector<std::string> { "MS.Internal.Xml.XPath.XPathScanner" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)scaner;
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
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParsePathExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParsePathExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseFilterExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseFilterExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParsePredicate(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParsePredicate", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseLocationPath(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseLocationPath", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseRelativeLocationPath(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseRelativeLocationPath", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
bool System_Xml::MS::Internal::Xml::XPath::XPathParser::IsStep(System_Xml::MS::Internal::Xml::XPath::XPathScanner_LexKind lexKind)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsStep", std::vector<std::string> { "MS.Internal.Xml.XPath.XPathScanner/LexKind" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&lexKind;
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
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseStep(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseStep", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseNodeTest(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput, System_Xml::MS::Internal::Xml::XPath::Axis_AxisType axisType, System_Xml::System::Xml::XPath::XPathNodeType nodeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseNodeTest", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode", "MS.Internal.Xml.XPath.Axis/AxisType", "System.Xml.XPath.XPathNodeType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)qyInput;
	params[1] = (intptr_t)&axisType;
	params[2] = (intptr_t)&nodeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
bool System_Xml::MS::Internal::Xml::XPath::XPathParser::IsPrimaryExpr(System_Xml::MS::Internal::Xml::XPath::XPathScanner* scanner)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPrimaryExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.XPathScanner" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)scanner;
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
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParsePrimaryExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParsePrimaryExpr", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::AstNode* System_Xml::MS::Internal::Xml::XPath::XPathParser::ParseMethod(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseMethod", std::vector<std::string> { "MS.Internal.Xml.XPath.AstNode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qyInput;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System_Xml::MS::Internal::Xml::XPath::AstNode*)returnValue;
}
void System_Xml::MS::Internal::Xml::XPath::XPathParser::CheckToken(System_Xml::MS::Internal::Xml::XPath::XPathScanner_LexKind t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckToken", std::vector<std::string> { "MS.Internal.Xml.XPath.XPathScanner/LexKind" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::MS::Internal::Xml::XPath::XPathParser::PassToken(System_Xml::MS::Internal::Xml::XPath::XPathScanner_LexKind t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PassToken", std::vector<std::string> { "MS.Internal.Xml.XPath.XPathScanner/LexKind" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::MS::Internal::Xml::XPath::XPathParser::NextLex()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NextLex");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::MS::Internal::Xml::XPath::XPathParser::TestOp(mscorlib::System::String* op)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TestOp", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)op;
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
void System_Xml::MS::Internal::Xml::XPath::XPathParser::CheckNodeSet(System_Xml::System::Xml::XPath::XPathResultType t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckNodeSet", std::vector<std::string> { "System.Xml.XPath.XPathResultType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Hashtable* System_Xml::MS::Internal::Xml::XPath::XPathParser::CreateFunctionTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFunctionTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Hashtable*)returnValue;
}
mscorlib::System::Collections::Hashtable* System_Xml::MS::Internal::Xml::XPath::XPathParser::CreateAxesTable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateAxesTable");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Hashtable*)returnValue;
}
System_Xml::MS::Internal::Xml::XPath::Axis_AxisType System_Xml::MS::Internal::Xml::XPath::XPathParser::GetAxis(System_Xml::MS::Internal::Xml::XPath::XPathScanner* scaner)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxis", std::vector<std::string> { "MS.Internal.Xml.XPath.XPathScanner" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)scaner;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System_Xml::MS::Internal::Xml::XPath::Axis_AxisType ret;
		std::memset(&ret, 0, sizeof(System_Xml::MS::Internal::Xml::XPath::Axis_AxisType));
		return ret;
	}
	return static_cast<System_Xml::MS::Internal::Xml::XPath::Axis_AxisType>(*(System_Xml::MS::Internal::Xml::XPath::Axis_AxisType*)il2cpp_object_unbox(returnValue));
}
void System_Xml::MS::Internal::Xml::XPath::XPathParser::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
