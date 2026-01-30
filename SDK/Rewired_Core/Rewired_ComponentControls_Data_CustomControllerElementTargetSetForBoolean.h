#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_Data_CustomControllerElementTargetSet.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTarget; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ComponentControls::Data
{
	struct CustomControllerElementTargetSetForBoolean : Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSet
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* _target;
		struct StaticFields
		{
			int32_t JxRfOmDFMeTwgRskGBahXfredAY;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_target();
		int32_t get_targetCount();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* get_Item(int32_t index);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* target);
		void ClearElementCaches();
	};
}

