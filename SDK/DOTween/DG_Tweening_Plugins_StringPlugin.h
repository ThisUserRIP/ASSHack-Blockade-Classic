#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "DG_Tweening_Plugins_Options_StringOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct StringOptions; };
#include "DG_Tweening_Plugins_Core_ABSTweenPlugin_3.h"
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
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
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace DOTween::DG::Tweening::Plugins
{
	struct StringPlugin : DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Text::StringBuilder* _Buffer;
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::Char>* _OpenedTags;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>* t, bool isRelative);
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>* t, mscorlib::System::String* fromValue, bool setImmediately);
		void Reset(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>* t);
		mscorlib::System::String* ConvertToStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>* t, mscorlib::System::String* value);
		void SetRelativeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>* t);
		void SetChangeValue(DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>* t);
		float GetSpeedBasedDuration(DOTween::DG::Tweening::Plugins::Options::StringOptions options, float unitsXSecond, mscorlib::System::String* changeValue);
		void EvaluateAndApply(DOTween::DG::Tweening::Plugins::Options::StringOptions options, DOTween::DG::Tweening::Tween* t, bool isRelative, DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::String>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::String>* setter, float elapsed, mscorlib::System::String* startValue, mscorlib::System::String* changeValue, float duration, bool usingInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
		mscorlib::System::Text::StringBuilder* Append(mscorlib::System::String* value, int32_t startIndex, int32_t length, bool richTextEnabled);
		IL2CPP::Array<wchar_t>* ScrambledCharsToUse(DOTween::DG::Tweening::Plugins::Options::StringOptions options);
		void _ctor();
		static void _cctor();
	};
}

