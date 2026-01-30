#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Demos_ControlRemappingDemo1.h"
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_Demos_ControlRemappingDemo1_QueueActionType.h"
#include "Rewired_Demos_ControlRemappingDemo1_QueueEntry_State.h"
#include "Rewired_Demos_ControlRemappingDemo1_UserResponse.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlRemappingDemo1_QueueEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id_k__BackingField;
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType _queueActionType_k__BackingField;
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry_State _state_k__BackingField;
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse _response_k__BackingField;
		struct StaticFields
		{
			int32_t uidCounter;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_id();
		void set_id(int32_t value);
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType get_queueActionType();
		void set_queueActionType(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType value);
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry_State get_state();
		void set_state(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueEntry_State value);
		Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse get_response();
		void set_response(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse value);
		static int32_t get_nextId();
		void _ctor(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_QueueActionType queueActionType);
		void Confirm(Assembly_CSharp::Rewired::Demos::ControlRemappingDemo1_UserResponse response);
		void Cancel();
	};
}

