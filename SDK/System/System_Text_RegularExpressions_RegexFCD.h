#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Text::RegularExpressions { struct RegexFC; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Text::RegularExpressions { struct RegexPrefix; };
namespace System::System::Text::RegularExpressions { struct RegexTree; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Text::RegularExpressions { struct RegexNode; };

namespace System::System::Text::RegularExpressions
{
	struct RegexFCD : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* _intStack;
		int32_t _intDepth;
		IL2CPP::Array<System::Text::RegularExpressions::RegexFC*>* _fcStack;
		int32_t _fcDepth;
		bool _skipAllChildren;
		bool _skipchild;
		bool _failed;
		static System::Text::RegularExpressions::RegexPrefix* FirstChars(System::Text::RegularExpressions::RegexTree* t);
		static System::Text::RegularExpressions::RegexPrefix* Prefix(System::Text::RegularExpressions::RegexTree* tree);
		static int32_t Anchors(System::Text::RegularExpressions::RegexTree* tree);
		static int32_t AnchorFromType(int32_t type);
		void _ctor();
		void PushInt(int32_t I);
		bool IntIsEmpty();
		int32_t PopInt();
		void PushFC(System::Text::RegularExpressions::RegexFC* fc);
		bool FCIsEmpty();
		System::Text::RegularExpressions::RegexFC* PopFC();
		System::Text::RegularExpressions::RegexFC* TopFC();
		System::Text::RegularExpressions::RegexFC* RegexFCFromRegexTree(System::Text::RegularExpressions::RegexTree* tree);
		void SkipChild();
		void CalculateFC(int32_t NodeType, System::Text::RegularExpressions::RegexNode* node, int32_t CurIndex);
	};
}

