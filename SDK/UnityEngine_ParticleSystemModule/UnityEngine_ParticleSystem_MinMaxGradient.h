#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_ParticleSystem.h"
namespace UnityEngine_ParticleSystemModule::UnityEngine { struct ParticleSystem; };
#include "UnityEngine_ParticleSystemGradientMode.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Gradient; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleSystem_MinMaxGradient
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemGradientMode m_Mode;
		UnityEngine_CoreModule::UnityEngine::Gradient* m_GradientMin;
		UnityEngine_CoreModule::UnityEngine::Gradient* m_GradientMax;
		UnityEngine_CoreModule::UnityEngine::Color m_ColorMin;
		UnityEngine_CoreModule::UnityEngine::Color m_ColorMax;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color color);
		UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemGradientMode get_mode();
		void set_mode(UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystemGradientMode value);
		UnityEngine_CoreModule::UnityEngine::Gradient* get_gradientMax();
		void set_gradientMax(UnityEngine_CoreModule::UnityEngine::Gradient* value);
		UnityEngine_CoreModule::UnityEngine::Gradient* get_gradientMin();
		void set_gradientMin(UnityEngine_CoreModule::UnityEngine::Gradient* value);
		UnityEngine_CoreModule::UnityEngine::Color get_colorMax();
		void set_colorMax(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_colorMin();
		void set_colorMin(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_color();
		void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Gradient* get_gradient();
		void set_gradient(UnityEngine_CoreModule::UnityEngine::Gradient* value);
		static UnityEngine_ParticleSystemModule::UnityEngine::ParticleSystem_MinMaxGradient op_Implicit(UnityEngine_CoreModule::UnityEngine::Color color);
	};
}

