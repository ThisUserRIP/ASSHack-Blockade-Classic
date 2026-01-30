#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct FreeCamera : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_LookSpeedController;
		float m_LookSpeedMouse;
		float m_MoveSpeed;
		float m_MoveSpeedIncrement;
		float m_Turbo;
		float inputRotateAxisX;
		float inputRotateAxisY;
		float inputChangeSpeed;
		float inputVertical;
		float inputHorizontal;
		float inputYAxis;
		bool leftShiftBoost;
		bool leftShift;
		bool fire1;
		struct StaticFields
		{
			mscorlib::System::String* kMouseX;
			mscorlib::System::String* kMouseY;
			mscorlib::System::String* kRightStickX;
			mscorlib::System::String* kRightStickY;
			mscorlib::System::String* kVertical;
			mscorlib::System::String* kHorizontal;
			mscorlib::System::String* kYAxis;
			mscorlib::System::String* kSpeedAxis;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void OnEnable();
		void RegisterInputs();
		void UpdateInputs();
		void Update();
		void _ctor();
		static void _cctor();
	};
}

