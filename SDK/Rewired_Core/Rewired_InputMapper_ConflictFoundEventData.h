#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_InputMapper_EventData.h"
#include "Rewired_InputMapper.h"
namespace Rewired_Core::Rewired { struct InputMapper; };
#include "Rewired_InputMapper_ConflictResponse.h"
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Rewired_Core::Rewired { struct ElementAssignmentInfo; };
#include "Rewired_ElementAssignmentConflictInfo.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct InputMapper_ConflictFoundEventData : Rewired_Core::Rewired::InputMapper_EventData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_ConflictResponse>* responseCallback;
		Rewired_Core::Rewired::ElementAssignmentInfo* assignment;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* conflicts;
		bool isProtected;
		void _ctor(Rewired_Core::Rewired::InputMapper* mapper, mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_ConflictResponse>* responseCallback, Rewired_Core::Rewired::ElementAssignmentInfo* assignment, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* conflicts, bool isProtected);
	};
}

