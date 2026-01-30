#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System::System::Text::RegularExpressions { struct RegexCode; };
namespace System::System::Text::RegularExpressions { struct RegexTree; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct ArgumentException; };
namespace System::System::Text::RegularExpressions { struct RegexNode; };

namespace System::System::Text::RegularExpressions
{
	struct RegexWriter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* _intStack;
		int32_t _depth;
		IL2CPP::Array<int32_t>* _emitted;
		int32_t _curpos;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Int32>* _stringhash;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* _stringtable;
		bool _counting;
		int32_t _count;
		int32_t _trackcount;
		mscorlib::System::Collections::Hashtable* _caps;
		static System::Text::RegularExpressions::RegexCode* Write(System::Text::RegularExpressions::RegexTree* t);
		void _ctor();
		void PushInt(int32_t I);
		bool EmptyStack();
		int32_t PopInt();
		int32_t CurPos();
		void PatchJump(int32_t Offset, int32_t jumpDest);
		void Emit(int32_t op);
		void Emit(int32_t op, int32_t opd1);
		void Emit(int32_t op, int32_t opd1, int32_t opd2);
		int32_t StringCode(mscorlib::System::String* str);
		mscorlib::System::ArgumentException* MakeException(mscorlib::System::String* message);
		int32_t MapCapnum(int32_t capnum);
		System::Text::RegularExpressions::RegexCode* RegexCodeFromRegexTree(System::Text::RegularExpressions::RegexTree* tree);
		void EmitFragment(int32_t nodetype, System::Text::RegularExpressions::RegexNode* node, int32_t CurIndex);
	};
}

