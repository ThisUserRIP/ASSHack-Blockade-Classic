#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_ContentValidator.h"
namespace System_Xml::System::Xml::Schema { struct SymbolsDictionary; };
namespace System_Xml::System::Xml::Schema { struct Positions; };
namespace mscorlib::System::Collections { struct Stack; };
namespace System_Xml::System::Xml::Schema { struct SyntaxTreeNode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_Schema_XmlSchemaContentType.h"
namespace System_Xml::System::Xml::Schema { struct ValidationState; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct NamespaceList; };
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
namespace System_Xml::System::Xml::Schema { struct InteriorNode; };
namespace System_Xml::System::Xml::Schema { struct ContentValidator; };
namespace System_Xml::System::Xml::Schema { struct BitSet; };

namespace System_Xml::System::Xml::Schema
{
	struct ParticleContentValidator : System_Xml::System::Xml::Schema::ContentValidator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SymbolsDictionary* symbols;
		System_Xml::System::Xml::Schema::Positions* positions;
		mscorlib::System::Collections::Stack* stack;
		System_Xml::System::Xml::Schema::SyntaxTreeNode* contentNode;
		bool isPartial;
		int32_t minMaxNodesCount;
		bool enableUpaCheck;
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaContentType contentType);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaContentType contentType, bool enableUpaCheck);
		void InitValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		mscorlib::System::Object* ValidateElement(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, int32_t& errorCode);
		bool CompleteValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		void Start();
		void OpenGroup();
		void CloseGroup();
		bool Exists(System_Xml::System::Xml::XmlQualifiedName* name);
		void AddName(System_Xml::System::Xml::XmlQualifiedName* name, mscorlib::System::Object* particle);
		void AddNamespaceList(System_Xml::System::Xml::Schema::NamespaceList* namespaceList, mscorlib::System::Object* particle);
		void AddLeafNode(System_Xml::System::Xml::Schema::SyntaxTreeNode* node);
		void AddChoice();
		void AddSequence();
		void AddStar();
		void AddPlus();
		void AddQMark();
		void AddLeafRange(mscorlib::System::Decimal min, mscorlib::System::Decimal max);
		void Closure(System_Xml::System::Xml::Schema::InteriorNode* node);
		System_Xml::System::Xml::Schema::ContentValidator* Finish(bool useDFA);
		IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* CalculateTotalFollowposForRangeNodes(System_Xml::System::Xml::Schema::BitSet* firstpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos, System_Xml::System::Xml::Schema::BitSet& posWithRangeTerminals);
		void CheckCMUPAWithLeafRangeNodes(System_Xml::System::Xml::Schema::BitSet* curpos);
		System_Xml::System::Xml::Schema::BitSet* GetApplicableMinMaxFollowPos(System_Xml::System::Xml::Schema::BitSet* curpos, System_Xml::System::Xml::Schema::BitSet* posWithRangeTerminals, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* minmaxFollowPos);
		void CheckUniqueParticleAttribution(System_Xml::System::Xml::Schema::BitSet* firstpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos);
		void CheckUniqueParticleAttribution(System_Xml::System::Xml::Schema::BitSet* curpos);
		IL2CPP::Array<IL2CPP::Array<int32_t>*>* BuildTransitionTable(System_Xml::System::Xml::Schema::BitSet* firstpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos, int32_t endMarkerPos);
	};
}

