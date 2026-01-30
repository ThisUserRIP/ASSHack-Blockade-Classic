#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "DG_Tweening_Plugins_Options_UintOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct UintOptions; };
#include "DG_Tweening_Plugins_Core_ABSTweenPlugin_3.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { struct Tween; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOGetter_1; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOSetter_1; };
#include "DG_Tweening_Core_Enums_UpdateNotice.h"

namespace DOTween::DG::Tweening::Plugins
{
	struct UintPlugin : DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Reset(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>* t);
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>* t, bool isRelative);
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>* t, uint32_t fromValue, bool setImmediately);
		uint32_t ConvertToStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>* t, uint32_t value);
		void SetRelativeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>* t);
		void SetChangeValue(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>* t);
		float GetSpeedBasedDuration(DOTween::DG::Tweening::Plugins::Options::UintOptions options, float unitsXSecond, uint32_t changeValue);
		void EvaluateAndApply(DOTween::DG::Tweening::Plugins::Options::UintOptions options, DOTween::DG::Tweening::Tween* t, bool isRelative, DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::UInt32>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::UInt32>* setter, float elapsed, uint32_t startValue, uint32_t changeValue, float duration, bool usingInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
		void _ctor();
	};
}

