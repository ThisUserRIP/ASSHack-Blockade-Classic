#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Demos_ControlRemappingDemo1.h"
namespace Assembly_CSharp::Rewired::Demos { struct ControlRemappingDemo1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\Rewired_Core\Rewired_ControllerType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct ControlRemappingDemo1_ControllerSelection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id;
		int32_t _idPrev;
		Rewired_Core::Rewired::ControllerType _type;
		Rewired_Core::Rewired::ControllerType _typePrev;
		void _ctor();
		int32_t get_id();
		void set_id(int32_t value);
		Rewired_Core::Rewired::ControllerType get_type();
		void set_type(Rewired_Core::Rewired::ControllerType value);
		int32_t get_idPrev();
		Rewired_Core::Rewired::ControllerType get_typePrev();
		bool get_hasSelection();
		void Set(int32_t id, Rewired_Core::Rewired::ControllerType type);
		void Clear();
	};
}

