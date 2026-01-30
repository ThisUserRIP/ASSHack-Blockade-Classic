#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_ComponentControl.h"
namespace Rewired_Core::Rewired::ComponentControls { struct CustomController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::ComponentControls { struct IComponentController; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTargetSet; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTarget; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct CustomControllerControl : Rewired_Core::Rewired::ComponentControls::ComponentControl
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::CustomController* get_controller();
		void _ctor();
		bool get_hasController();
		void OnSubscribeEvents();
		void OnUnsubscribeEvents();
		Rewired_Core::Rewired::ComponentControls::IComponentController* FindController();
		mscorlib::System::Type* GetRequiredControllerType();
		void KmMjvEmFNOldhBoOBBKwHFcGCcu(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSet* A_1, float A_2, float A_3);
		void KmMjvEmFNOldhBoOBBKwHFcGCcu(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSet* A_1, bool A_2);
		void OnCustomControllerUpdate();
		void KmMjvEmFNOldhBoOBBKwHFcGCcu(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* A_1, float A_2, float A_3);
		void KmMjvEmFNOldhBoOBBKwHFcGCcu(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* A_1, bool A_2);
		void efniHDwilyjpndXpikzjHxXkOjU();
	};
}

