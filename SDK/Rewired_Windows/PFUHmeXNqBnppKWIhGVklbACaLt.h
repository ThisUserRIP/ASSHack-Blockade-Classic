#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace Rewired_Windows { struct PFUHmeXNqBnppKWIhGVklbACaLt_NTHYqlTRIblEDkKtJqmjNsDoPZa; };
namespace Rewired_Core::Rewired { template <typename T> struct UpdateLoopDataSet_1; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
namespace Rewired_Windows { struct PFUHmeXNqBnppKWIhGVklbACaLt_sNGaHzkmtjzSPilrmtfmsOaBlqo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\Rewired_Core\Rewired_Config_UpdateLoopSetting.h"
#include "..\Rewired_Core\Rewired_UpdateLoopType.h"
namespace Rewired_Windows { struct AXGVhevpLaEAglBsIdcywDBphcKk; };
#include "..\Rewired_Core\Rewired_InputSource.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };

namespace Rewired_Windows
{
	struct PFUHmeXNqBnppKWIhGVklbACaLt : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* UmZsgigRPpgSvPmsZamjPTDIxpe;
		Rewired_Core::Rewired::UpdateLoopDataSet_1<Rewired_Windows::PFUHmeXNqBnppKWIhGVklbACaLt_NTHYqlTRIblEDkKtJqmjNsDoPZa>* yVvornHosvrnPKNWMdvDhAoiGRd;
		Rewired_Core::Rewired::HardwareControllerMap_Game* sFgzcyDfkRqpykWDvtfDreAOGcs;
		Rewired_Windows::PFUHmeXNqBnppKWIhGVklbACaLt_sNGaHzkmtjzSPilrmtfmsOaBlqo* VKUtFhJIEuBWsXAggkvJjYFmjPX;
		bool ZfFisVKJzqHjeDmaITnYhfkCouwf;
		int32_t dhTWywlyOPffFxLINhrIcQlIaAxa;
		bool pPRdqbxcsrBZXBODoRpVgnxEeSVY;
		void _ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting);
		void UBtDtyKqtCaCYiwHstIKGRWXfDPm(Rewired_Core::Rewired::UpdateLoopType A_1);
		void saHdiOfKZYXroGoldVEcHxmhjlj(Rewired_Windows::AXGVhevpLaEAglBsIdcywDBphcKk* A_1);
		void fMYhVXkLWnSGPzSBxCMgVlmNipuA(bool A_1);
		void QkpSxcHlZfiXtROFuKXzKpThndJ(bool A_1);
		int32_t ArtOmNApeQevtALPNVXPqimSjENF();
		void IvAOnHjVElpptIcuEanYrvmrCaw(bool A_1);
		void XPsicbRiFBZuiRoFOGBROWnixVf(bool A_1);
		void lIybJhTcjXoyHgGPweeTugcXodx(bool A_1);
		void slCtFuFsCFBQiiHkBZoUTCjppOW(Rewired_Core::Rewired::UpdateLoopType A_1);
		void thirAKSiCGrwxkhnpoQhXbXVCfk();
		Rewired_Core::Rewired::InputSource get_inputSource();
		Rewired_Core::Rewired::HardwareControllerMap_Game* get_hardwareMap();
		int32_t get_buttonCount();
		int32_t get_axisCount();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_mousePosition();
		Rewired_Core::Rewired::Controller_Extension* get_controllerExtension();
		void UpdateInputData(Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		void Clear();
		Rewired_Core::Rewired::HardwareControllerMap_Game* uQJpQeNOnsVdXNsKaDngJkZZDXU();
		void Dispose();
		void Finalize();
		void PXrZGIGSLLCROHddMrTCJytIVa(bool A_1);
	};
}

