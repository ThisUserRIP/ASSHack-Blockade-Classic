#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Reflection_BindingFlags.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_InputLegacyModule\UnityEngine_TouchPhase.h"
#include "..\UnityEngine_InputLegacyModule\UnityEngine_TouchType.h"
#include "..\UnityEngine_InputLegacyModule\UnityEngine_Touch.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };

namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	struct SimulatedTouch : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _WasModified_k__BackingField;
		mscorlib::System::Object* m_touch;
		struct StaticFields
		{
			mscorlib::System::Reflection::BindingFlags FLAGS;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Reflection::FieldInfo>* Fields;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_WasModified();
		void set_WasModified(bool value);
		void _ctor();
		static void _cctor();
		int32_t get_FingerId();
		void set_FingerId(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_Position();
		void set_Position(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_RawPosition();
		void set_RawPosition(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_DeltaPosition();
		void set_DeltaPosition(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		float get_DeltaTime();
		void set_DeltaTime(float value);
		int32_t get_TapCount();
		void set_TapCount(int32_t value);
		UnityEngine_InputLegacyModule::UnityEngine::TouchPhase get_Phase();
		void set_Phase(UnityEngine_InputLegacyModule::UnityEngine::TouchPhase value);
		float get_Pressure();
		void set_Pressure(float value);
		float get_MaximumPossiblePressure();
		void set_MaximumPossiblePressure(float value);
		UnityEngine_InputLegacyModule::UnityEngine::TouchType get_Type();
		void set_Type(UnityEngine_InputLegacyModule::UnityEngine::TouchType value);
		float get_AltitudeAngle();
		void set_AltitudeAngle(float value);
		float get_AzimuthAngle();
		void set_AzimuthAngle(float value);
		float get_Radius();
		void set_Radius(float value);
		float get_RadiusVariance();
		void set_RadiusVariance(float value);
		UnityEngine_InputLegacyModule::UnityEngine::Touch Get();
	};
}

