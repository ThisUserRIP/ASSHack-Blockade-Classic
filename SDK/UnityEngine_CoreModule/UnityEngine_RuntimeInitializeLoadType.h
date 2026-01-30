#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct RuntimeInitializeLoadType : int32_t
	{
		AfterSceneLoad = static_cast<int32_t>(0x0),
		BeforeSceneLoad = static_cast<int32_t>(0x1),
		AfterAssembliesLoaded = static_cast<int32_t>(0x2),
		BeforeSplashScreen = static_cast<int32_t>(0x3),
		SubsystemRegistration = static_cast<int32_t>(0x4),
	};
}

