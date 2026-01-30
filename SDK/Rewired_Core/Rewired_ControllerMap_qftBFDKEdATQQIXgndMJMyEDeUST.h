#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerMap.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Rewired_Core::Rewired::ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST* osuowjGAEXihMLbjXEAemmMAXTO;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::ControllerMap_qftBFDKEdATQQIXgndMJMyEDeUST* get_Default();
		int32_t Compare(Rewired_Core::Rewired::ActionElementMap* x, Rewired_Core::Rewired::ActionElementMap* y);
		void _ctor();
	};
}

