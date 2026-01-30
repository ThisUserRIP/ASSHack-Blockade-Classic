#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ThreadSafeUnityInput.h"
namespace Rewired_Core::Rewired { struct ThreadSafeUnityInput; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct ThreadSafeUnityInput_Mouse : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<bool>* KSpzNAgatRNMZeWMcWyvXBJKZgz;
		IL2CPP::Array<float>* fCPjegfKmeebIyXsYJecJeuOVuE;
		int32_t apjrjYRusitZlASaGzQYNkNGKNJ;
		UnityEngine_CoreModule::UnityEngine::Vector3 sXplPjvsepOkDZagVTfUyFCxTUl;
		bool hJVwcfCeWVSllGXDifFvekgCrvz;
		struct StaticFields
		{
			int32_t NFDrpyMSEQSmoWpJHEcLgpMdakK;
			int32_t HQGwtFkfrtpKCnZthIopFyqUkW;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_monitoring();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_mousePosition();
		bool get_mousePresent();
		void _ctor();
		void PostInitialize();
		void Update();
		void Monitor(bool state);
		bool GetButton(int32_t index);
		float GetAxisRaw(int32_t index);
		void GetButtonValues(IL2CPP::Array<bool>* buttons);
		void GetAxisRawValues(IL2CPP::Array<float>* axes);
		void MTqBGqBfisAnvOaGvqcKpLCIfeNj();
		void bomyXZJQfFCBwVyslrttVIEyerC();
		void KlygjTczzRinASQsNzcdtldsMnc();
		void cuRQcQXPFhbzIokigYgIldBXDea();
		void ncyVgcoGSWeCSSaEkfsWNRaXLHj();
		void PlsfdEkfdddFkcJCfMEigMrepxrY();
	};
}

