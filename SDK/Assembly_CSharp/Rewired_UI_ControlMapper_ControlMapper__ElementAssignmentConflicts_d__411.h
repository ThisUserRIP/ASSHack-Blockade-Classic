#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\Rewired_Core\Rewired_ElementAssignmentConflictInfo.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictInfo; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputMapping; };
#include "..\Rewired_Core\Rewired_ElementAssignment.h"
namespace Rewired_Core::Rewired { struct ElementAssignment; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\Rewired_Core\Rewired_ElementAssignmentConflictCheck.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictCheck; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper__ElementAssignmentConflicts_d__411 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		Rewired_Core::Rewired::ElementAssignmentConflictInfo __2__current;
		int32_t __l__initialThreadId;
		Rewired_Core::Rewired::Player* player;
		Rewired_Core::Rewired::Player* __3__player;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping* mapping;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputMapping* __3__mapping;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper* __4__this;
		Rewired_Core::Rewired::ElementAssignment assignment;
		Rewired_Core::Rewired::ElementAssignment __3__assignment;
		bool skipOtherPlayers;
		bool __3__skipOtherPlayers;
		Rewired_Core::Rewired::ElementAssignmentConflictCheck _conflictCheck_5__2;
		mscorlib::System::Collections::Generic::IEnumerator_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* __7__wrap2;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		void __m__Finally1();
		void __m__Finally2();
		void __m__Finally3();
		Rewired_Core::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		mscorlib::System::Collections::Generic::IEnumerator_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
	};
}

