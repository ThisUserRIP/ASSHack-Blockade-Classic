#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_Custom_CustomInputSource.h"
namespace Rewired_Core::Rewired::Platforms::PS4 { struct PS4InputSource_GvJDkYcqakBBwxdTuGUVEKkeXePC; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_Platforms_PS4_PS4InputSource_GvJDkYcqakBBwxdTuGUVEKkeXePC_BfYAwEaSXVdmlpNahoXOHMqILalb.h"
namespace Rewired_Core::Rewired::Platforms::PS4 { struct PS4InputSource_GvJDkYcqakBBwxdTuGUVEKkeXePC_BfYAwEaSXVdmlpNahoXOHMqILalb; };
namespace Rewired_Core::Rewired::Platforms::PS4 { struct PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW; };
#include "Rewired_Platforms_PS4_PS4InputSource_GvJDkYcqakBBwxdTuGUVEKkeXePC_XDDBecQvbNFucHxTBdKHglEeGJNf.h"
namespace Rewired_Core::Rewired::Platforms::PS4 { struct PS4InputSource_GvJDkYcqakBBwxdTuGUVEKkeXePC_XDDBecQvbNFucHxTBdKHglEeGJNf; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct Controller; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct PS4InputSource : Rewired_Core::Rewired::Platforms::Custom::CustomInputSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_GvJDkYcqakBBwxdTuGUVEKkeXePC* dLOYamjZPqAOHlSlEuSgwhCublW;
		bool FveCfoOTDiUkAgeCIvFKdZxOIjM;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		bool get_isReady();
		void _ctor();
		void Update();
		static int32_t QEpfZvqNUXZIrHEVTqCDwJmUEhX(int32_t A_0);
		void vApuQrwXBpdqGlyqMHxUtUmFGjw(Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_GvJDkYcqakBBwxdTuGUVEKkeXePC_BfYAwEaSXVdmlpNahoXOHMqILalb A_1);
		void IgYiHVwzHSojDztyyMRoJtiBnij(Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_JgKjLuPVbqRLmrrbaPlHSJMLqFW* A_1);
		void eRuBWAkSPxCjzbWzbxYlNzJeUWiq(Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_GvJDkYcqakBBwxdTuGUVEKkeXePC_XDDBecQvbNFucHxTBdKHglEeGJNf A_1);
		bool Rewired_Interfaces_IControllerAssigner_get_enabled();
		void Rewired_Interfaces_IControllerAssigner_set_enabled(bool A_1);
		bool Rewired_Interfaces_IControllerAssigner_CanHandleAssignment(Rewired_Core::Rewired::ControllerType A_1, Rewired_Core::Rewired::Controller* A_2);
		void Rewired_Interfaces_IControllerAssigner_AssignController(Rewired_Core::Rewired::ControllerType A_1, Rewired_Core::Rewired::Controller* A_2);
		void Finalize();
		void Dispose(bool disposing);
	};
}

