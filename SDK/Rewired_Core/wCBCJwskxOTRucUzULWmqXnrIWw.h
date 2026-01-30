#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired::Utils::Classes::Utility { template <typename T> struct ObjectPool_1; };
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct IObjectPool; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerElementTarget; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
#include "Rewired_ControllerElementType.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct Controller_Element; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };

namespace Rewired_Core
{
	struct wCBCJwskxOTRucUzULWmqXnrIWw : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Controller* mKKQaygHMiNBDQEDxjDWbHpPMDyY;
		int32_t ZkhjdNsamAethrqQEpEHRosvTDL;
		Rewired_Core::Rewired::AxisRange xRhTQhdaqIDbZIOJrcVaApoIXNhf;
		Rewired_Core::Rewired::Utils::Classes::Utility::IObjectPool* RXkMhMUSiLKSPsOxkrpDblzsdgfA;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		struct StaticFields
		{
			Rewired_Core::Rewired::Utils::Classes::Utility::ObjectPool_1<Rewired_Core::wCBCJwskxOTRucUzULWmqXnrIWw>* TiYqboQnePsvjZqhQCRHGfKoTugR;
			mscorlib::System::Func_1<Rewired_Core::wCBCJwskxOTRucUzULWmqXnrIWw>* cDKiuclSZQjSrYetZwzIBJbpZvO;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId, Rewired_Core::Rewired::AxisRange axisRange);
		void oEKaCGHExUmCjCFSEnlxSTdOydKx(Rewired_Core::Rewired::ControllerElementTarget A_1);
		void oEKaCGHExUmCjCFSEnlxSTdOydKx(Rewired_Core::Rewired::IControllerElementTarget* A_1);
		void oEKaCGHExUmCjCFSEnlxSTdOydKx(Rewired_Core::wCBCJwskxOTRucUzULWmqXnrIWw* A_1);
		int32_t get_elementIdentifierId();
		Rewired_Core::Rewired::AxisRange get_axisRange();
		bool get_hasTarget();
		Rewired_Core::Rewired::ControllerElementType get_elementType();
		mscorlib::System::String* get_descriptiveName();
		Rewired_Core::Rewired::Controller* get_controller();
		Rewired_Core::Rewired::Controller_Element* get_element();
		Rewired_Core::Rewired::ControllerElementIdentifier* get_elementIdentifier();
		Rewired_Core::Rewired::Utils::Classes::Utility::IObjectPool* Rewired_Utils_Classes_Utility_IPoolableObject_Internal_get_pool();
		void Rewired_Utils_Classes_Utility_IPoolableObject_Internal_set_pool(Rewired_Core::Rewired::Utils::Classes::Utility::IObjectPool* value);
		void Rewired_Utils_Classes_Utility_IPoolableObject_Internal_Clear();
		void Rewired_Interfaces_IPoolableObject_Return();
		static Rewired_Core::wCBCJwskxOTRucUzULWmqXnrIWw* ToPdExEAiWsFivOTzqJnuJRCQsPw();
		static Rewired_Core::wCBCJwskxOTRucUzULWmqXnrIWw* ToPdExEAiWsFivOTzqJnuJRCQsPw(Rewired_Core::Rewired::ControllerElementTarget A_0);
		static void OEJvREjfxqKKhjKHxuprQjCcXzg(Rewired_Core::wCBCJwskxOTRucUzULWmqXnrIWw* A_0);
		static Rewired_Core::wCBCJwskxOTRucUzULWmqXnrIWw* twJJKosqyrSZiCjABgFSjvrNDCq();
		void System_IDisposable_Dispose();
		void Finalize();
		void snZhCwQAgWjYPcOgscQYoAtKPcNi(bool A_1);
		static Rewired_Core::wCBCJwskxOTRucUzULWmqXnrIWw* LRWowAgOtHkoyQfCKfMNexCcgFv();
	};
}

