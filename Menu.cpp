// menu remade by hj.#4337
// better than yours 100%
// dogshits
// enjoy to use it freely
void Imgui()
{
ImGui::SetNextWindowSize({1004.f,529.f});

ImGui::Begin( "MENU - hj. remake");
ImGui::SetCursorPos({10.f,26.f});
if(ImGui::Button("Aim", {183.f,90.f}))
{

}
ImGui::SetCursorPos({214.f,26.f});
if(ImGui::Button("Visuals", {183.f,90.f}))
{

}
ImGui::SetCursorPos({414.f,27.f});
if(ImGui::Button("MISC", {183.f,90.f}))
{

}
ImGui::SetCursorPos({613.f,27.f});
if(ImGui::Button("Colors", {183.f,90.f}))
{

}
ImGui::SetCursorPos({11.f,127.f});
ImGui::Checkbox("Enable no recoil", &the_bool);
ImGui::SetCursorPos({11.f,153.f});
ImGui::Checkbox("Force automatic", &the_bool);
ImGui::SetCursorPos({11.f,180.f});
ImGui::Checkbox("Null stance penalty", &the_bool);
ImGui::SetCursorPos({11.f,207.f});
ImGui::Checkbox("Enable aimbot", &the_bool);
ImGui::SetCursorPos({13.f,277.f});
ImGui::PushItemWidth(712.000000);
ImGui::SliderFloat("aim fov", &valueF,0,100);
ImGui::PopItemWidth( );
ImGui::SetCursorPos({14.f,305.f});
ImGui::PushItemWidth(732.000000);
ImGui::SliderFloat("aim smooth", &valueF,0,100);
ImGui::PopItemWidth( );
ImGui::SetCursorPos({14.f,332.f});
ImGui::PushItemWidth(747.000000);
ImGui::SliderFloat("aim smooth x", &valueF,0,100);
ImGui::PopItemWidth( );
ImGui::SetCursorPos({15.f,359.f});
ImGui::PushItemWidth(747.000000);
ImGui::SliderFloat("aim smooth y", &valueF,0,100);
ImGui::PopItemWidth( );
ImGui::SetCursorPos({16.f,386.f});
ImGui::PushItemWidth(746.000000);
ImGui::SliderFloat("recoil value", &valueF,0,100);
ImGui::PopItemWidth( );
ImGui::SetCursorPos({15.f,417.f});
ImGui::Checkbox("Enable thickness(removed for the time being)", &the_bool);
ImGui::SetCursorPos({15.f,438.f});
ImGui::Checkbox("Target NPC", &the_bool);
ImGui::SetCursorPos({15.f,459.f});
ImGui::Checkbox("Target heli(DONT ENABLE EITHER OPTIONS WHEN HELI ISNT ON THE MAP)", &the_bool);
ImGui::SetCursorPos({15.f,479.f});
ImGui::Checkbox("Always hit heli rotor", &the_bool);
ImGui::SetCursorPos({15.f,499.f});
ImGui::Checkbox("magic bullet(heli only)", &the_bool);
ImGui::SetCursorPos({213.f,202.f});
ImGui::PushItemWidth(49.000000);
ImGui::Text("label19");
ImGui::PopItemWidth( );


ImGui::End();
}


