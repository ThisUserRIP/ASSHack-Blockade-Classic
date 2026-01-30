#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::MS::Internal::Xml::XPath { struct XPathScanner; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_XPath_XPathResultType.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::MS::Internal::Xml::XPath { struct AstNode; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "MS_Internal_Xml_XPath_XPathScanner_LexKind.h"
#include "MS_Internal_Xml_XPath_Axis_AxisType.h"
#include "System_Xml_XPath_XPathNodeType.h"

namespace System_Xml::MS::Internal::Xml::XPath
{
	struct XPathParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::MS::Internal::Xml::XPath::XPathScanner* scanner;
		int32_t parseDepth;
		struct StaticFields
		{
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* temparray1;
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* temparray2;
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* temparray3;
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* temparray4;
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* temparray5;
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* temparray6;
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* temparray7;
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* temparray8;
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* temparray9;
			mscorlib::System::Collections::Hashtable* functionTable;
			mscorlib::System::Collections::Hashtable* AxesTable;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::MS::Internal::Xml::XPath::XPathScanner* scanner);
		static System_Xml::MS::Internal::Xml::XPath::AstNode* ParseXPathExpresion(mscorlib::System::String* xpathExpresion);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseExpresion(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseOrExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseAndExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseEqualityExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseRelationalExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseAdditiveExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseMultiplicativeExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseUnaryExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseUnionExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		static bool IsNodeType(System_Xml::MS::Internal::Xml::XPath::XPathScanner* scaner);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParsePathExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseFilterExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParsePredicate(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseLocationPath(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseRelativeLocationPath(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		static bool IsStep(System_Xml::MS::Internal::Xml::XPath::XPathScanner_LexKind lexKind);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseStep(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseNodeTest(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput, System_Xml::MS::Internal::Xml::XPath::Axis_AxisType axisType, System_Xml::System::Xml::XPath::XPathNodeType nodeType);
		static bool IsPrimaryExpr(System_Xml::MS::Internal::Xml::XPath::XPathScanner* scanner);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParsePrimaryExpr(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		System_Xml::MS::Internal::Xml::XPath::AstNode* ParseMethod(System_Xml::MS::Internal::Xml::XPath::AstNode* qyInput);
		void CheckToken(System_Xml::MS::Internal::Xml::XPath::XPathScanner_LexKind t);
		void PassToken(System_Xml::MS::Internal::Xml::XPath::XPathScanner_LexKind t);
		void NextLex();
		bool TestOp(mscorlib::System::String* op);
		void CheckNodeSet(System_Xml::System::Xml::XPath::XPathResultType t);
		static mscorlib::System::Collections::Hashtable* CreateFunctionTable();
		static mscorlib::System::Collections::Hashtable* CreateAxesTable();
		System_Xml::MS::Internal::Xml::XPath::Axis_AxisType GetAxis(System_Xml::MS::Internal::Xml::XPath::XPathScanner* scaner);
		static void _cctor();
	};
}

