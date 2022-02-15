#pragma once
#include <SDL2/SDL.h>

class Time
{
    public:
        /*double t = 0.0;
        double dt = 1 / 60.0;

        double currentTime = SDL_GetTicks();
        double accumulator = 0.0;

        State previous;
        State Current;

        virtual void deltaTimeCal(Uint32 Ticks){
            double newTime = Ticks;
            double frameTime = newTime - currentTime;
            currentTime += newTime;

            if(frameTime > 0.25){
                frameTime = 0.25;
            }
            currentTime = newTime;

            accumulator += frameTime;

            while (accumulator >= dt){
                previous = Current;
                intergrate( Current, t, dt );
                t += dt;
                accumulator -= dt;
            }

            const double alpha = accumulator / dt;

            State state = Current * alpha + previous * (1.0 - alpha);


        }
private:
        struct State{
            float x; //position
            float v; //velocity
        };

        struct Derivative{
            float dx; //dx/dt = velocity
            float dv; // dv/dt = acceleration
        };

        Derivative evaluate (const State & initial, double t, float dt, const Derivative & d){
            State state;
            state.x = initial.x + d.dx*dt;
            state.v = initial.v + d.dv*dt;

            Derivative output;
            output.dx = state.v;
            output.dv = acceleration(state, t+dt);
            return output;
        }

        float acceleration(const State & state, double t){
            const float k = 15.0f;
            const float b = 0.1f;
            return -k * state.x - b * state.v;
        }

        void integrate(State & state, double t, float dt){
            Derivative a,b,c,d;

            a = evaluate( state, t, 0.0f, Derivative());
            b = evaluate( state, t, dt*0.5f, a);
            c = evaluate( state, t, dt*0.5f, b);
            d = evaluate( state, t, dt, c);

            float dxdt = 1.0f / 6.0f * (a.dx + 2.0f * (b.dx + c.dx) + d.dx);

            float dvdt = 1.0f / 6.0f * (a.dv + 2.0f * (b.dv + c.dv) + d.dv);

            state.x = state.x + dxdt * dt;
            state.v = state.v + dvdt * dt;
        }*/
};
