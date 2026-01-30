#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "DG_Tweening_Plugins_Options_NoOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct NoOptions; };
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
	struct DoublePlugin : DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Reset(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t);
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t, bool isRelative);
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t, double fromValue, bool setImmediately);
		double ConvertToStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t, double value);
		void SetRelativeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t);
		void SetChangeValue(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>* t);
		float GetSpeedBasedDuration(DOTween::DG::Tweening::Plugins::Options::NoOptions options, float unitsXSecond, double changeValue);
		void EvaluateAndApply(DOTween::DG::Tweening::Plugins::Options::NoOptions options, DOTween::DG::Tweening::Tween* t, bool isRelative, DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Double>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Double>* setter, float elapsed, double startValue, double changeValue, float duration, bool usingInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
		void _ctor();
	};
}

